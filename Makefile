# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 13:59:47 by nsichtig          #+#    #+#              #
#    Updated: 2025/03/19 08:29:06 by nsichtig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	ft_isalnum.c\
		ft_isdigit.c\
		ft_memset.c \
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
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_itoa.c\
		ft_memcmp.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\

OBJS =	$(SRC:%.c=%.o)

HEADER = libft.h

all: $(NAME)

$(NAME):
		$(CC)	$(CFLAGS) -c $(SRC)
		ar rc $(NAME)	$(OBJS)
		ranlib $(NAME)

clean:
		 rm -rf $(OBJS)

fclean: clean
		rm -f $(NAME)

re:	fclean all
