# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 15:02:47 by ommadhi           #+#    #+#              #
#    Updated: 2019/11/29 00:22:01 by ommadhi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OC = ft_isalpha.c ft_lstadd.c ft_memccpy.c ft_memset.c ft_putnbr.c ft_strcat.c ft_strdup.c ft_strlen.c ft_strnequ.c ft_strstr.c ft_spl_whitespaces.c\
	 ft_isascii.c ft_lstdel.c ft_memchr.c ft_print_tables.c ft_putnbr_fd.c ft_strchr.c ft_strequ.c ft_strmap.c ft_strnew.c ft_strsub.c ft_dectohex.c\
	 ft_atoi.c ft_isdigit.c ft_lstdelone.c ft_memcmp.c ft_putchar.c ft_putstr.c ft_strclr.c ft_striter.c ft_strmapi.c ft_strnstr.c ft_strtrim.c\
	 ft_bzero.c ft_isprint.c ft_lstiter.c ft_memcpy.c ft_putchar_fd.c ft_putstr_fd.c ft_strcmp.c ft_striteri.c ft_strncat.c ft_strrchr.c ft_tolower.c\
	 ft_countwords.c ft_itoa.c ft_lstnew.c ft_memdel.c ft_putendl.c ft_sort_ascii.c ft_strcpy.c ft_strjoin.c ft_strncmp.c ft_strrev.c ft_toupper.c ft_strndup.c\
	 ft_isalnum.c ft_len_words.c ft_memalloc.c ft_memmove.c ft_putendl_fd.c ft_space.c ft_strdel.c ft_strlcat.c ft_strncpy.c ft_strsplit.c ft_put2str.c	ft_put4str.c ft_is_whitespace.c\
	 ft_ultimputstr.c get_next_line.c\

OB = ft_isalpha.o ft_lstadd.o ft_memccpy.o ft_memset.o ft_putnbr.o ft_strcat.o ft_strdup.o ft_strlen.o ft_strnequ.o ft_strstr.o ft_spl_whitespaces.o\
	 ft_isascii.o ft_lstdel.o ft_memchr.o ft_print_tables.o ft_putnbr_fd.o ft_strchr.o ft_strequ.o ft_strmap.o ft_strnew.o ft_strsub.o ft_dectohex.o\
	 ft_atoi.o ft_isdigit.o ft_lstdelone.o ft_memcmp.o ft_putchar.o ft_putstr.o ft_strclr.o ft_striter.o ft_strmapi.o ft_strnstr.o ft_strtrim.o\
	 ft_bzero.o ft_isprint.o ft_lstiter.o ft_memcpy.o ft_putchar_fd.o ft_putstr_fd.o ft_strcmp.o ft_striteri.o ft_strncat.o ft_strrchr.o ft_tolower.o ft_strndup.o\
	 ft_countwords.o ft_itoa.o ft_lstnew.o ft_memdel.o ft_putendl.o ft_sort_ascii.o ft_strcpy.o ft_strjoin.o ft_strncmp.o ft_strrev.o ft_toupper.o\
	 ft_isalnum.o ft_len_words.o ft_memalloc.o ft_memmove.o ft_putendl_fd.o ft_space.o ft_strdel.o ft_strlcat.o ft_strncpy.o ft_strsplit.o ft_put2str.o ft_put4str.o ft_is_whitespace.o\
	 ft_ultimputstr.o get_next_line.o\

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME) $(OB)

$(NAME) :$(OB)
	ar rc libft.a $(OB)
clean :
	    rm -f $(OB)
fclean : clean
	    rm -f $(NAME)
re : fclean all
