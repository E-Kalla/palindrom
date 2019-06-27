/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** longueur
*/

#include <stdlib.h>

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}

int my_lentab(char **str)
{
    int i = 0;

    while (str[i] != NULL) {
        i += 1;
    }
    return (i);
}