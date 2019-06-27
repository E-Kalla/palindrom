/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** convert base
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int     base_to_deci(char *num, int base)
{
    int nb = 0;
    int temp = 0;
    int i = my_strlen(num) - 1;

    for (int a = 0; a < my_strlen(num); a += 1) {
        temp = (num[a] - 48) * power_calc(base, i);
        i -= 1;
        nb += temp;
    }
    return (nb);
}

char    *clean_zero(char *str)
{
    char *new = malloc(sizeof(char) * my_strlen(str));
    int i = 0;

    while (str[i] == '0')
        i += 1;
    for (int a = 0; str[i] != '\0'; a += 1) {
        new[a] = str[i];
        i += 1;
    }
    free(str);
    return (new);
}

char    *convert_base(long int num, int base)
{
    int i = 0;
    char *result;
    int rest;

    while (power_calc(base, i) < num)
        i += 1;
    result = malloc(sizeof(char*) * i + 1);
    result[i] = '\0';
    while (i >= 0) {
        if (num % base > 9)
            rest = 'A' - 10;
        else
            rest = '0';
        result[i] = (num % base) + rest;
        num /= base;
        i -= 1;
    }
    result = clean_zero(result);
    return (result);
}