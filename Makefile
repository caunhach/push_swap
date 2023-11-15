# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caunhach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 20:36:03 by caunhach          #+#    #+#              #
#    Updated: 2023/07/18 22:44:45 by caunhach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = src/main/index.c\
       src/main/main.c\
       src/main/radix.c\
       src/main/simple.c\
       src/check/ft_isdouble.c\
       src/check/ft_isint.c\
       src/check/ft_isnum.c\
       src/check/ft_issorted.c\
	   src/check/ft_isni.c\
       src/rules/push.c\
       src/rules/reverse.c\
       src/rules/rotate.c\
       src/rules/swap.c\
       src/utils/free_split.c\
       src/utils/free_stack.c\
       src/utils/ft_lst_new.c\
       src/utils/ft_lstadd_back.c\
       src/utils/ft_lstadd_front.c\
       src/utils/ft_lstsize.c\
       src/utils/ft_print_list.c

OBJS = $(SRCS:.c=.o)

LIBFT = libft/

LIBFT_PATH = libft/libft.a

CFLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJS)
	@make -C $(LIBFT) all
	@gcc $(CFLAGS) $(OBJS) $(LIBFT_PATH) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)
	make fclean -C $(LIBFT)
fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all bonus clean fclean re
