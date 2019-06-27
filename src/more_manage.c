/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** more manage
*/

#include "../include/my.h"
#include <stdlib.h>

int     multiple_base(char **av)
{
    int nb = 0;

    for (int i = 0; av[i] != NULL; i += 1) {
        if (my_strcmp(av[i],"-b") == 0)
            nb += 1;
    }
    if (nb > 1)
        return (1);
    return (0);
}

int     multiple_max(char **av)
{
    int nb = 0;

    for (int i = 0; av[i] != NULL; i += 1) {
        if (my_strcmp(av[i],"-imax") == 0)
            nb += 1;
    }
    if (nb > 1)
        return (1);
    return (0);
}

int     multiple_min(char **av)
{
    int nb = 0;

    for (int i = 0; av[i] != NULL; i += 1) {
        if (my_strcmp(av[i],"-imin") == 0)
            nb += 1;
    }
    if (nb > 1)
        return (1);
    return (0);
}

int     first_arg(char *str)
{
    if ((my_strcmp(str,"-n") != 0) && (my_strcmp(str,"-p") != 0))
        return (84);
    return (0);
}