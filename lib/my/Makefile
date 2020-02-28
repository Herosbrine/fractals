##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compile libmy
##

SRC	= $(wildcard *.c)

OBJ = $(SRC:.c=.o)

NAME = libmy.a

INCLUDE = my.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(INCLUDE) ../../include/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f ../$(NAME) $(NAME)
	rm -f ../../include/$(INCLUDE)

re: fclean all
