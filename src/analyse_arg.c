/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** analyse arg
*/

#include "../include/my.h"
#include <stdlib.h>

int     valid_opt(char *opt)
{
    if (my_strcmp(opt,"-p") == 0 || my_strcmp(opt,"-n") == 0)
        return (1);
    if (my_strcmp(opt,"-imax") == 0 || my_strcmp(opt,"-imin") == 0)
        return (1);
    if (my_strcmp(opt,"-b") == 0)
        return (1);
    return (-1);
}

int     valid_param(char *param)
{
    for (int i = 0; param[i] != '\0'; i += 1) {
        if (param[i] <= '9' && param[i] >= '0')
            return (0);
        else
            return (-1);
    }
    return (0);
}

int     pair(int nb)
{
    if (nb % 2 == 0)
        return (1);
    else
        return (0);
}

int     analyse_arg(int ac, char **av)
{
    int error = 0;

    for (int i = 1; av[i] != NULL; i += 1) {
        if (pair(i) == 0)
            error = valid_opt(av[i]);
        else if (pair(i))
            error = valid_param(av[i]);
        if (error == -1)
            return (84);
    }
    return (0);
}