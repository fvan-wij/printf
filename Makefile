# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvan-wij <fvan-wij@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 18:08:39 by fvan-wij          #+#    #+#              #
#    Updated: 2022/11/04 12:10:09 by fvan-wij         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libftprintf.a

HEADER		:=	libftprintf.h

SRC			:=	ft_strlen.c \
			ft_printf.c \
			ft_putnbr_fd.c \
			ft_isdecimal.c \
			ft_ischar.c \
			ft_putchar_fd.c \
			ft_isprint.c \
			ft_iswhitespace.c \
			ft_isui.c \
			ft_put_ui_nbr_fd.c \
			ft_putstr_fd.c \
			ft_isstring.c \
			ft_ispercent.c \
			ft_ishex.c \
			ft_puthex.c

#BONUS		:= 

OBJ 		:= $(SRC:.c=.o)

CC			:= gcc

CFLAGS		:= -Wall -Werror -Wextra

BONUSOBJ 	:= $(BONUS:.c=.o)

RMV			:= rm -f

# Regular Colors
Black		= "\033[0;30m"		# Black
Red			= "\033[0;31m"		# Red
Green		= "\033[0;32m"		# Green
Yellow		= "\033[0;33m"		# Yellow
Blue		= "\033[0;34m"		# Blue
Purple		= "\033[0;35m"		# Purple
Cyan		= "\033[0;36m"		# Cyan
White		= "\033[0;37m"		# White

# Reset
Text_Off	= "\033[0m"			# Text Reset

#Text styles
Bold		= "\033[1m"

#Avoid bonus from relinking
ifdef WITH_BONUS
	OBJ_FILES = $(OBJ) $(BONUSOBJ)
else
	OBJ_FILES = $(OBJ)
endif

$(NAME): 	$(OBJ)
			@ar -rcs $(NAME) $(OBJ)
			@echo $(Green) "$$DRCOOL" $(Text_Off)
			@echo $(Green) $(Bold)Completed ✅ $(Text_Off)
			

all: 		$(NAME)

%.o: 		%.c
			@echo $(Blue) Building... $^ $(Text_Off)
			@$(CC) $(CFLAGS) -c -o $@ $^

clean: 		
			@echo $(Yellow) Cleaned all object files! $(Text_Off)
			@$(RMV) $(OBJ)

fclean: 	clean
			@echo $(Yellow) Cleaned libft.a! $(Text_Off)
			@$(RMV) $(NAME)

re: 		fclean $(NAME)

.PHONY:		all clean fclean re bonus

define DRCOOL
 
                      ▄▄▄▄▄▄▄▄▄
                  ▄▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▄
           ▄   ▄▓▒▒▒█▓▓▀▀▀▒▒▒▒▒▀▀▓▓█▒▓
      ▒▒▓▒▒▓▀▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▒▒▒▓
      ▒▓█▒▓▒▒▒▒▓▒▒▒▄▄▄██▄▄▒▒▒▒▒▒▄████▄▄▒▓▄
      ▓▒▓▓█▓▀▀▀▓██████████████████████████
      ▒▒▓██▀▒▒▒▓▒▀██████████████████████▒▓
     ▐▒▒▓▌▓▓▄▓▒▒▒▒▀█████████▀▒█████████▒▒▓
     ▒▐▓█▀ ▓▒▒▒▒▒▒▒▒▀▀███▀▀▒▒▒▒▒▀▀▀█▓▓▓▒▒▓
           ▐▓▒▒▒▒▒▀▓▓▒▓▒▒▓▒▒▓▒▓▓▓▓▓▓▒▒▒▒▐      ▓▒▌
            ▓▓▒▒▒▒▒▒▒▒▐▒▒▓▒▒▌░▐▒▒▓▒▒▒▒▒▒▀     ▐▌▒▌
             ▐▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▒▒▒▒▓▒▒▓▓       ▓▓▓▓▄▄
               ▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▀       ▓▓▓▓▒▒▒▒
                 ▀▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▀          ▓▓▓▓▓▒▒▒▒
                       ▀▀▀▀▀▀▀                 █▓▀▒▓▒ 

endef
export DRCOOL
