/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** main.c
*/

#include "../include/my.h"
#include <stdio.h>

int main(int ac, char **av)
{
    t_opt opt;
    
    if (usage(ac,av)) {
        display_usage();
        return (0);
    }
    if (arg_manager(ac,av) == 84)
        return (84);
    fill_opt(&opt,av);
    if (my_strcmp(av[1],"-p") == 0) {
        if (algo_p(&opt, av[2]) == 84)
            return (84);
    } else
        algo_n(&opt);
    return (0);
}