##
## EPITECH PROJECT, 2023
## makefile
## File description:
## pour my_printf
##

CC	=	gcc

SRC	=	src/my_sokoban.c			\
		src/my_putstr.c				\
		src/error.c					\
		src/rules.c					\
		src/my_strlen_nb_char.c		\
		src/my_strlen_nb_line.c		\
		src/my_str_to_word_array.c	\
		src/my_strdup.c				\
		src/open_map.c				\
		src/mouv_p.c				\
		src/position.c				\
		src/map_limit.c				\
		src/mouvs.c					\
		src/check_v_d.c

OBJ	=	$(SRC:.c=.o)

NAME_O	=	my_sokoban

CFLAGS	=	 -Wall -Wextra -lncurses -iquote include

all: $(NAME_O)
$(NAME_O):	$(OBJ)
	$(CC) -o $(NAME_O) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME_O)

re: fclean all

.PHONY: all clean fclean re
