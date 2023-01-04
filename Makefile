# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 10:21:22 by lcollado          #+#    #+#              #
#    Updated: 2023/01/04 13:21:45 by lcollado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILE VARIABLES
NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror
INCLUDE = -I inc
CC = gcc $(FLAGS) $(INCLUDE)

# CODE VARIABLES
DIR_TOOLS = tools
DIR_SRC = src
DIR_OBJ = obj

SRC_TOOLS = ft_putchar.c \
			ft_puthex_ptr.c \
			ft_putnbr_base.c \
			ft_putstr.c \
			ft_putunsnbr.c \
			ft_strlen.c 

SRCS = ${SRC_TOOLS:%=$(DIR_TOOLS)/%} \
		ft_formatprint.c \
		ft_printf.c

OBJS = $(SRCS:%.c=$(DIR_OBJ)/%.o)

#RULES
all: $(NAME)

$(NAME) : $(OBJS)
	ar crs $(NAME) $(OBJS)

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c
	@mkdir -p $(dir $@)
	@$(CC) -c $< -o $@

clean:
	@rm -rf $(DIR_OBJ)
fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all re clean fclean 


