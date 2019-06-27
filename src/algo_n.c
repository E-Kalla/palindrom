/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** algo n
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    algo_n_found(t_opt *opt)
{
    opt->num = base_to_deci(int_to_char(opt->num),opt->base);
    my_put_nbr(opt->palin);
    my_putstr(" leads to ");
    my_put_nbr(opt->num);
    my_putstr(" in ");
    my_put_nbr(opt->iteration);
    my_putstr(" iteration(s) in base ");
    my_put_nbr(opt->base);
    my_putchar('\n');
}

void    algo_n_nofound(void)
{
    my_putstr("no solution\n");
}

int     algo_n(t_opt *opt)
{
    opt->count = 0;
    opt->ok = 1;
    opt->convert = convert_base(opt->num, opt->base);
    opt->num = my_getnbr(opt->convert);
    while (is_palindrom(opt->num) != 1 ||
        (opt->iteration <= opt->imax && opt->count < opt->imin)) {
        opt->convert = reverse(opt->convert);
        opt->ok = base_to_deci(opt->convert, opt->base);
        opt->num = base_to_deci(int_to_char(opt->num),opt->base);
        opt->num = opt->ok + opt->num;
        opt->save = opt->num;
        opt->iteration += 1;
        opt->count += 1;
        opt->convert = convert_base(opt->num, opt->base);
        opt->num = my_getnbr(opt->convert);
    }
    opt->save = opt->num;
    if ((opt->iteration < opt->imin || opt->iteration > opt->imax) &&
        is_palindrom(opt->num))
        algo_n_nofound();
    else algo_n_found(opt);
}