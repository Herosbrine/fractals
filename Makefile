##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make project infinadd
##

SRC = $(wildcard *.c)

FLAGS =-I./include

LIB =-lmy -L./lib/my

NAME = fractals

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my/
	gcc $(FLAGS) -lncurses -o $(NAME) $(SRC) $(LIB)

clean:
	make clean -C ./lib/my/
	rm -f $(OBJ)

fclean: clean
	make fclean -C ./lib/my/
	rm -f $(NAME)

re: fclean all
