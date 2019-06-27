/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** my.h
*/

#ifndef MY_H_
	#define MY_H_

typedef struct opt_s {
    int palin;
    long long int num;
    char *prev;
    char *next;
    int base;
    int imin;
    int imax;
    int iteration;
    int nb;
    int nb2;
    int count;
    int save;
    int result;
    char *convert;
    int ok;
    int error;
    int soluce;
} t_opt;

void    algo_n_nofound(void);
int     valid_palindrom(char *nb);
int     base_to_deci(char *num, int base);
int     power_calc(int num, int power);
char    *convert_base(long int value, int base);
int     my_put_nbr(int nb);
int     fill_opt(t_opt *opt, char **av);
int     arg_manager(int ac, char **av);
int     my_putstr(char const *str);
void    my_putchar(char n);
int     my_strlen(char *str);
int     my_strcmp(char const *s1, char const *s2);
char    *my_strcpy(char *dest, char *src);
long long int    my_getnbr(char *str);
void    display_usage(void);
int     usage(int ac, char **av);
int     my_puterror(char *str);
int     check_imax(char *number);
int     check_imin(char *number);
int     check_n(char *number);
int     check_p(char *number);
int     check_base(char *number);
int     multiple_min(char **av);
int     multiple_max(char **av);
int     multiple_base(char **av);
int     first_arg(char *str);
int     analyse_arg(int ac, char **av);
int     pair(int nb);
int     algo_n(t_opt *opt);
int     algo_p(t_opt *opt, char *pal);
int     is_palindrom(int nb);
char    *int_to_char(int nb);
char    *reverse(char *str);

#endif /* !MY_H_ */
