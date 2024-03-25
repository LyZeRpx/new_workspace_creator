##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## FILEMAKE
##

CC ?= gcc

SRC 	= 	src/strcut.c					\
			src/mini_printf.c				\
			src/my_is_prime.c				\
			src/my_put_nbr.c				\
			src/my_putchar.c				\
			src/my_putstr.c					\
			src/my_isneg.c					\
			src/my_realloc.c				\
			src/my_str_to_word_array.c		\
			src/my_strcmp.c					\
			src/my_atoi.c					\
			src/my_strconcat.c				\
			src/my_strdup.c					\
			src/my_strlen.c					\
			src/my_strncmp.c				\

NAME	=	libmy.a

RM ?= rm

VPATH = ./headers

CFLAGS = -Wall -Wextra -iquote $(VPATH)

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: compil

compil: re
	$(CC) $(CFLAGS) -L. main.c -o test -lstr

.PHONY: all clean fclean re debug compil \
