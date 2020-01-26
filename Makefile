# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kabengha <kabengha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/23 18:47:44 by kabengha          #+#    #+#              #
#    Updated: 2020/01/25 17:18:01 by ommadhi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	fdf
SRC =	src/fdf.c\
		src/draw_line.c\
		src/fill_map.c\
		src/print_map.c\
		src/ft_get_data.c\
		src/menu.c\
		src/ft_free_tab.c\

OBJ = $(SRC:%.c=%.o)
LIBF = libft/libft.a

all:$(NAME)

$(NAME): $(OBJ)
		make -C libft
		gcc -g -Wall -Wextra -Werror -I /usr/local/include $(SRC) -L /usr/local/lib -lmlx -L libft/ -lft  -framework OpenGL -framework AppKit -o $(NAME)

clean:
		rm -rf $(OBJ)
		make fclean -C libft/

fclean: clean
		rm -rf $(NAME)

re: fclean all
		make re -C libft/

%.o : %.c
		gcc -Wall -Wextra -Werror -c $< -o $@
