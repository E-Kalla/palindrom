/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** fill opt
*/

#include "../include/my.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int     check_palin(int palin, int base)
{
    char *tmp = convert_base(palin, base);
    if (valid_palindrom(tmp))
        return (0);
    else
        return (1);
}

int     fill_opt(t_opt *opt, char **av)
{
    opt->base = 10;
    opt->imin = 0;
    opt->imax = 100;
    opt->iteration = 0;
    opt->result = 0;
    opt->palin = 0;
    for (int i = 0; av[i] != NULL; i += 1) {
        if (my_strcmp(av[i],"-p")  == 0|| my_strcmp(av[i],"-n") == 0)
            opt->palin = my_getnbr(av[i+1]);
        if (my_strcmp(av[i],"-b") == 0)
            opt->base = my_getnbr(av[i+1]);
        if (my_strcmp(av[i],"-imax") == 0)
            opt->imax = my_getnbr(av[i+1]);
        if (my_strcmp(av[i],"-imin") == 0)
            opt->imin = my_getnbr(av[i+1]);
    }
    if (opt->palin != 0 && opt->base != 10) {
        if (check_palin(opt->palin,opt->base))
            opt->error = 84;
    }
    opt->num = opt->palin;
    opt->prev = int_to_char(opt->palin);
    opt->next = int_to_char(opt->palin);
    return (0);
}