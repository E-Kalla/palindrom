##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Make palindrome
##

SRC		=	./src/main.c     \
			./src/arg_manager.c \
			./src/my_getnbr.c   \
			./src/my_pustr.c    \
			./src/my_putchar.c  \
			./src/my_strlen.c   \
			./src/my_strcpy.c   \
			./src/my_strcmp.c   \
			./src/usage.c   \
			./src/bad_option.c  \
			./src/more_manage.c \
			./src/analyse_arg.c \
			./src/fill_opt.c    \
			./src/algo_n.c  \
			./src/algo_p.c  \
			./src/palindrom.c   \
			./src/int_to_char.c \
			./src/my_put_nbr.c  \
			./src/convert_base.c    \
			./src/power.c

OBJ 	= 	$(SRC:.c=.o)

NAME	=	palindrome

CFLAGS  = -g3

$(NAME) : $(OBJ)
		gcc -o $(NAME) $(OBJ)
all:	$(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re: fclean all
