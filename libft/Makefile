# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caunhach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 17:50:21 by caunhach          #+#    #+#              #
#    Updated: 2023/02/21 16:56:32 by caunhach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	src/ft_isalnum.c \
		src/ft_isprint.c \
		src/ft_memcmp.c \
		src/ft_putchar_fd.c \
		src/ft_split.c \
		src/ft_strlcat.c \
		src/ft_strncmp.c \
		src/ft_substr.c \
		src/ft_atol.c \
		src/ft_atoi.c \
		src/ft_isalpha.c \
		src/ft_itoa.c \
		src/ft_memcpy.c \
		src/ft_putendl_fd.c \
		src/ft_strchr.c \
		src/ft_strlcpy.c \
		src/ft_strnstr.c \
		src/ft_tolower.c \
		src/ft_bzero.c \
		src/ft_isascii.c \
		src/ft_memmove.c \
		src/ft_putnbr_fd.c \
		src/ft_strdup.c \
		src/ft_strlen.c \
		src/ft_strrchr.c \
		src/ft_toupper.c \
		src/ft_calloc.c \
		src/ft_isdigit.c \
		src/ft_memchr.c \
		src/ft_memset.c \
		src/ft_putstr_fd.c \
		src/ft_strjoin.c \
		src/ft_strmapi.c \
		src/ft_strtrim.c \
		src/ft_striteri.c \
		src/ft_error.c \

INCLUDES_PATH = inc

INCLUDES = $(INCLUDES_PATH)/libft.h

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	@rm -f $(OBJS)
	@rm -f $(INCLUDES_PATH)/libft.h.gch
fclean: clean
	@rm -f $(NAME)
re : fclean all

.PHONY: all bonus clean fclean re
