##
## EPITECH PROJECT, 2017
## 107transfer - Makefile
## File description:
## Makefile for matchstick
##

SRC	=	./src/main.c 		\
		./src/generate_maze.c	\
		./src/finish_maze.c	\
		./src/my_memset_2d.c	\
		./src/my_strdup_2d.c	\
		./src/dig_maze.c	\
		./src/print_maze.c

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

CFLAGS	=	-W -g -Wall -Wextra -fno-stack-limit -fsplit-stack

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
