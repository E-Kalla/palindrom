/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** arg_manager
*/

#include "../include/my.h"
#include <stdlib.h>

int     bad_option(char **av)
{
    int error = 0;

    for (int i = 0; av[i] != NULL; i +=1) {
        if (my_strcmp(av[i],"-n") == 0)
            error = check_n(av[i+1]);
        else if (my_strcmp(av[i],"-p") == 0)
            error = check_p(av[i+1]);
        else if (my_strcmp(av[i],"-b") == 0)
            error = check_base(av[i+1]);
        else if (my_strcmp(av[i],"-imin") == 0)
            error = check_imin(av[i+1]);
        else if (my_strcmp(av[i],"-imax") == 0)
            error = check_imax(av[i+1]);
        if (error == 1)
            return (1);
        }
    return (0);
}

int     incompatible_arg(char **av)
{
    int nb = 0;

    for (int i = 0; av[i] != NULL; i += 1) {
        if (my_strcmp(av[i],"-n") == 0)
            nb += 1;
        if (my_strcmp(av[i],"-p") == 0)
            nb += 1;
    }
    if (nb != 1)
        return (1);
    return (0);
}

int     more_manage(int ac, char **av)
{
    if (multiple_base(av) || multiple_min(av) || multiple_max(av))
        return (84);
    if (first_arg(av[1]))
        return (84);
    if (analyse_arg(ac, av) == 84) {
        return (84);
    }
    return (0);
}

int     arg_manager(int ac, char **av)
{
    if (ac <= 2 || ac > 10 || pair(ac) == 1) {
        my_puterror("Invalid argument\n");
        return (84);
    }
    if (incompatible_arg(av)) {
        my_puterror("Invalid argument\n");
        return (84);
    }
    if (bad_option(av)) {
        my_puterror("Invalid argument\n");
        return (84);
    }
    if (more_manage(ac,av) == 84) {
        my_puterror("Invalid argument\n");
        return (84);
    }
    return (0);
}