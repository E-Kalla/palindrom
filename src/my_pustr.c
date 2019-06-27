/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** strr
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../include/my.h"

int   my_puterror_spe(char *str)
{
    int i = 0;

    while (str[i] != '\n') {
        write(2,&str[i],1);
        i += 1;
    }
    return (i);
}

int   my_puterror(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(2,&str[i],1);
        i += 1;
    }
    return (i);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
    return (0);
}

void    my_put_tab(char **tab, char c)
{
    for (int i = 0; tab[i] != NULL; i += 1) {
        my_putstr(tab[i]);
        my_putchar(c);
    }
}