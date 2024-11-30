##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## FILEMAKE
##

CC ?= gcc

SRC 	=	src/main.c 					\



VPATH = ./include

CFLAGS += -Wall -Wextra -pedantic

LIBMY = my

LIBGRAPHIC = libgraphic

LIBGRAPHIC_PATH = lib/${LIBGRAPHIC}

LIBMY_PATH = lib/${LIBMY}

CSFMLIBS = -lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio -lm

LDLIBS = -lmy -lgraphic ${CSFMLIBS}

LDFLAGS = -Llib ${LDLIBS}

CPPFLAGS = -iquote $(VPATH)

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ${LIBMY_PATH}
	$(MAKE) -C ${LIBGRAPHIC_PATH}
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS)

clean:
	$(MAKE) clean -C ${LIBMY_PATH}
	$(MAKE) clean -C ${LIBGRAPHIC_PATH}
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C ${LIBMY_PATH}
	$(MAKE) fclean -C ${LIBGRAPHIC_PATH}
	$(RM) $(NAME)

re: fclean all
	$(MAKE) re -C ${LIBMY_PATH}

debug: CFLAGS += -g3
debug: LDFLAGS += -fsanitize=address
debug: re
	$(MAKE) debug -C ${LIBMY_PATH}
	$(MAKE) debug -C ${LIBGRAPHIC_PATH}

.PHONY: all clean fclean re debug
