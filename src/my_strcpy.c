/*
** EPITECH PROJECT, 2018
** strcpy
** File description:
** copy
*/

#include "../include/my.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *reverse(char *str)
{
    char c;
    int i = 0;
    int j = my_strlen(str) - 1;

    while (i < j) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        j -= 1;
        i += 1;
    }
    return (str);
}

char *my_strcpy(char *dest, char *src)
{
    int i = 0;
    int len = my_strlen(src);

    dest = malloc(sizeof(char) * len + 1);
    while (src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    return (dest);
}