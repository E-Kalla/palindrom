/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** base manage.c
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char    *base_convert(int nb, int base)
{
    char *temp;

    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb >= 2) {
        base_convert(nb / 2, base);
        base_convert(nb % 2, base);
    }
    else {
        my_putchar (nb + 48);
    }
    return (0);
}