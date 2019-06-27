/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** power calc
*/

#include "../include/my.h"
#include <stdio.h>

int     power_calc(int num, int power)
{
    if (power == 0)
        return (1);
    else
        return (num * power_calc(num, power - 1));
}