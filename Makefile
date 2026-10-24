# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helabiad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/23 22:33:54 by helabiad          #+#    #+#              #
#    Updated: 2026/10/24 22:22:31 by helabiad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_atoi.c ft_isprint.c ft_memchr.c ft_putnbr_fd.c ft_strlen.c ft_tolower.c ft_bzero.c ft_itoa.c ft_memcmp.c ft_putstr_fd.c ft_strmapi.c ft_toupper.c ft_calloc.c ft_lstadd_back.c ft_memcpy.c ft_strchr.c ft_strncmp.c libft.h ft_isalnum.c ft_memmove.c ft_strdup.c ft_strnstr.c ft_isalpha.c ft_lstlast.c ft_memset.c ft_strjoin.c ft_strrchr.c ft_isascii.c ft_putchar_fd.c ft_strlcat.c ft_strtrim.c ft_isdigit.c ft_strlcpy.c ft_substr.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
