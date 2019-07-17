# @Author: la-montagne
# @Date:   2019-07-17T12:42:34+02:00
# @Last modified by:   la-montagne
# @Last modified time: 2019-07-17T13:02:06+02:00

SRC	=	./src/main.c 		\
		./src/generate_maze.c	\
		./src/finish_maze.c	\
		./src/my_memset_2d.c	\
		./src/my_strdup_2d.c	\
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
