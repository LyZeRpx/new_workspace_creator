##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## FILEMAKE
##

CC ?= gcc

SRC 	=	src/clone_dbl_arr.c					\
			src/count_target.c					\
			src/return_line_from_delim.c		\
			src/return_index_from_delim.c		\
			src/cut_str_at_char.c				\
			src/print_dbl_array.c				\
			src/free_dbl_array.c				\
			src/get_array_size.c				\
			src/up_morph_dbl_arr.c				\


NAME	=	libmeta.a

RM ?= rm

VPATH = ./headers

CFLAGS = -Wall -Wextra -iquote $(VPATH)

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	make -C aux_libs/my_libc
	ar rc $(NAME) $(OBJ)

clean:
	make clean -C aux_libs/my_libc
	$(RM) -f $(OBJ)

fclean: clean
	make fclean -C aux_libs/my_libc
	$(RM) -f $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: compil

compil: re
	$(CC) $(CFLAGS) -L. main.c -o test -lstr

.PHONY: all clean fclean re debug compil \
