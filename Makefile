# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkocakur <kkocakur@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/14 18:11:54 by kkocakur          #+#    #+#              #
#    Updated: 2025/06/14 18:12:15 by kkocakur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

SRC			= ft_strlen.c ft_memset.c ft_isalpha.c ft_strdup.c \
			  ft_calloc.c ft_itoa.c ft_strjoin.c ft_split.c \
			  ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
			  ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c \
			  ft_striteri.c ft_isdigit.c ft_bzero.c ft_memcpy.c \
			  ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_isascii.c \
			  ft_isalnum.c ft_toupper.c ft_tolower.c ft_strchr.c \
			  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
			  ft_strnstr.c ft_atoi.c

OBJ			= $(SRC:.c=.o)

AR			= ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
