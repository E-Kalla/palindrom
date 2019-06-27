/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** is a palindrom
*/

#include "../include/my.h"
#include <stdio.h>

int     valid_palindrom(char *nb)
{
    int i = my_strlen(nb) - 1;

    for (int j = 0; nb[j] != '\0'; j += 1) {
        if (nb[j] != nb[i])
            return (0);
        i -= 1;
    }
    return (1);
}

int     is_palindrom(int nb)
{
    char *name = int_to_char(nb);
    int i = my_strlen(name) - 1;

    for (int j = 0; name[j] != '\0'; j += 1) {
        if (name[j] != name[i])
            return (0);
        i -= 1;
    }
    return (1);
}