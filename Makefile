# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvan-wij <fvan-wij@student.codam.nl>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 18:08:39 by fvan-wij          #+#    #+#              #
#    Updated: 2022/11/11 14:06:43 by fvan-wij         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libftprintf.a

HEADER		:=	ft_printf.h

SRC			:=	ft_printf.c \
			ft_putnbr.c \
			ft_putchar.c \
			ft_put_ui_nbr.c \
			ft_putstr.c \
			ft_puthex.c \
			ft_putadr.c \
			ft_printspecifier.c \
			ft_put_cap_hex.c

OBJ 		:= $(SRC:.c=.o)

CC			:= gcc

CFLAGS		:= -Wall -Werror -Wextra

RMV			:= rm -f

$(NAME): 	$(OBJ)
			ar -rcs $(NAME) $(OBJ)

all: 		$(NAME)

%.o: 		%.c
			$(CC) $(CFLAGS) -c -o $@ $^

clean: 		
			$(RMV) $(OBJ)

fclean: 	clean
			$(RMV) $(NAME)

re: 		fclean $(NAME)

.PHONY:		all clean fclean re
