/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** check bad option
*/

#include "../include/my.h"

int     check_n(char *number)
{
    int nb = my_getnbr(number);

    if (nb < 0)
        return (1);
    return (0);
}

int     check_p(char *number)
{
    int nb = my_getnbr(number);

    if (nb < 0)
        return (1);
    return (0);
}

int     check_base(char *number)
{
    int nb = my_getnbr(number);

    if (nb <= 1 || nb > 10)
        return (1);
    return (0);
}

int     check_imin(char *number)
{
    int nb = my_getnbr(number);

    if (nb < 0)
        return (1);
    return (0);
}

int     check_imax(char *number)
{
    int nb = my_getnbr(number);

    if (nb < 0)
        return (1);
    return (0);
}