# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 14:35:08 by pdal-mol          #+#    #+#              #
#    Updated: 2021/12/14 11:38:58 by pdal-mol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

FILES = \
				check_err.c\
				check_exec_rights.c\
				err_msg.c\
				find_path.c\
				get_all_paths.c\
				clear_cmd.c\
				free_doublechar.c\
				init_cmd.c\
				main.c

LIB = ./libft/libft.a
SRCS = $(addprefix ./srcs/,$(FILES))
OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: library $(NAME) 

%.o: %.c ./includes/pipex.h $(LIB)
	gcc $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) $(LIB)
	gcc $(FLAGS) $(OBJ) $(LIB) -o $(NAME) 

library :
	make -C ./libft

clean:
	make -C ./libft clean
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf libft/libft.a
	/bin/rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean library re
