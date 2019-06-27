/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** usage
*/

#include "../include/my.h"

void    display_usage(void)
{
    my_putstr("USAGE\n      ");
    my_putstr("./palindrome -n number -p palindrome [-b base] [-imin i]");
    my_putstr(" [-imax i]\n\nDESCRIPTION\n");
    my_putstr("      -n n     integer to be transformed (>=0)\n");
    my_putstr("      -p pal   palindromic number to be obtained");
    my_putstr(" (incompatible with the -n\n               option) (>=0)\n  ");
    my_putstr("     ");
    my_putstr("        if defined, all fitting values of n will be output\n");
    my_putstr("      -b base  base in wich the procedure will be executed");
    my_putstr(" (1<b<=10) [def: 10]\n");
    my_putstr("      -imin i  minimum number of iterations, included (>=0)");
    my_putstr(" [def: 0]\n");
    my_putstr("      -imax i  maximum number of iterations, included (>=0)");
    my_putstr(" [def: 100]\n");
}

int     usage(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1],"-h") == 0)
        return (1);
    return (0);
}