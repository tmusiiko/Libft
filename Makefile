# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 23:46:54 by taras             #+#    #+#              #
#    Updated: 2021/08/20 15:26:26 by tmusiiko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS=ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c \
	ft_isdigit.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strlcat.c \
	ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c \
	ft_tolower.c ft_toupper.c ft_bzero.c ft_memccpy.c \
	ft_memchr.c ft_memcmp.c ft_memmove.c ft_calloc.c \
	ft_strdup.c ft_strnstr.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_split.c ft_striteri.c

CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a

OBJ=$(SRCS:.c=.o)

all:	$(NAME)
$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJ)

clean:
				rm -f $(OBJ)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)

.PHONY: all clean fclean re