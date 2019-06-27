/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** algo_p
*/

#include "../include/my.h"
#include <stdlib.h>
#include <stdio.h>

void    solution_p(t_opt *opt)
{
    if (opt->iteration >= opt->imin && opt->iteration <= opt->imax) {
        opt->soluce += 1;
        my_put_nbr(opt->save);
        my_putstr(" leads to ");
        my_put_nbr(opt->palin);
        my_putstr(" in ");
        my_put_nbr(opt->iteration);
        my_putstr(" iteration(s) in base ");
        my_put_nbr(opt->base);
        my_putchar('\n');
    }
}

int    loop_p(t_opt *opt)
{
    opt->count = 0;
    opt->ok = 1;
    opt->convert = convert_base(opt->save, opt->base);
    opt->num = my_getnbr(opt->convert);
    while (opt->num <= opt->result && opt->iteration <= opt->imax) { // && opt->count <= opt->imin)) {
        if (opt->num == opt->result) {
            solution_p(opt);
            return (0);
        }
        opt->convert = reverse(opt->convert);
        opt->ok = base_to_deci(opt->convert, opt->base);
        opt->num = base_to_deci(int_to_char(opt->num),opt->base);
        opt->num = opt->ok + opt->num;
        opt->iteration += 1;
        opt->count += 1;
        opt->convert = convert_base(opt->num, opt->base);
        opt->num = my_getnbr(opt->convert);
    }
    return (0);
}

int     algo_p(t_opt *opt, char *pal)
{
    opt->count = 0;
    opt->num = 0;
    opt->save = 0;
    opt->soluce = 0;
    opt->result = my_getnbr(convert_base(opt->palin,opt->base));
    if (valid_palindrom(int_to_char(opt->result)) != 1) {
        my_puterror("invalid argument\n");
        return (84);
    }
    while (opt->save <= opt->palin) {
        loop_p(opt);
        opt->iteration = 0;
        opt->save += 1;
        opt->num = opt->save;
    }
    if (opt->soluce == 0)
        my_putstr("no solution\n");
    return (0);
}