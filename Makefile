##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## FILEMAKE
##

CC ?= gcc

AR ?= ar

RM = rm

SRC 	=	main/main.c 							\


VPATH = ./headers

CPPFLAGS = -iquote $(VPATH) -Wall -Wextra


OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: re

.PHONY: all clean fclean re debug \
