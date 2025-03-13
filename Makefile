# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 13:59:47 by nsichtig          #+#    #+#              #
#    Updated: 2025/03/11 15:12:48 by nsichtig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	ft_isalnum.c\
		ft_isdigit.c\
		ft_memcmp.c\
		ft_memset.c\
		ft_strlcpy.c\
		ft_strnstr.c\
		ft_toupper.c\
		ft_atoi.c\
		ft_isalpha.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_strchr.c\
		ft_strlen.c\
		ft_strrchr.c\
		ft_bzero.c\
		ft_isascii.c\
		ft_memchr.c\
		ft_memmove.c\
		ft_strlcat.c\
		ft_strncmp.c\
		ft_tolower.c\

OBJS =	ft_isalnum.o\
		ft_isdigit.o\
		ft_memcmp.o\
		ft_memset.o\
		ft_strlcpy.o\
		ft_strnstr.o\
		ft_toupper.o\
		ft_atoi.o\
		ft_isalpha.o\
		ft_isprint.o\
		ft_memcpy.o\
		ft_strchr.o\
		ft_strlen.o\
		ft_strrchr.o\
		ft_bzero.o\
		ft_isascii.o\
		ft_memchr.o\
		ft_memmove.o\
		ft_strlcat.o\
		ft_strncmp.o\
		ft_tolower.o\

HEADER = libft.h

all: $(NAME)

$(NAME):	$(CC)	$(CFLAGS) -c $(SRC)
			ar rc $(NAME)	$(OBJS)
			ranlib $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:	fclean all
