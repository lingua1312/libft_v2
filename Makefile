# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsichtig <nsichtig@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 13:59:47 by nsichtig          #+#    #+#              #
#    Updated: 2025/03/24 14:52:51 by nsichtig         ###   ########.fr        #
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
		ft_split.c\
		ft_strtrim.c\
		ft_strmapi.c\
		ft_striteri.c

SRC_BONUS = ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c

OBJS =			$(SRC:%.c=%.o)

OBJS_BONUS =	$(SRC_BONUS:%.c=%.o)

HEADER = libft.h

all: $(NAME)

$(NAME):
		$(CC)	$(CFLAGS) -c $(SRC)
		ar rc $(NAME)	$(OBJS)
		ranlib $(NAME)

bonus: $(OBJS) $(OBJS_BONUS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
		 rm -rf $(OBJS)

fclean: clean
		rm -f $(NAME)

re:	fclean all
