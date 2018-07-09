# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/08 16:19:28 by abhaviri          #+#    #+#              #
#    Updated: 2018/07/08 21:26:51 by abhaviri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = rush-2
FLAG = -Wall -Werror -Wextra
INCLUDE = -I ./include
SRC = $(addprefix ./srcs/, $(SRCS))
RUSH = $(addprefix ./rushes/, $(RUSHES))
RUSHES = ft_atoi.c ft_putchar.c main.c
SRCS = get_rush.c ft_functs.c main.c ft_rush.c

all:
	@$(CC) $(FLAG) $(RUSH) ./rushes/rush00.c -o rush-00
	@$(CC) $(FLAG) $(RUSH) ./rushes/rush01.c -o rush-01
	@$(CC) $(FLAG) $(RUSH) ./rushes/rush02.c -o rush-02
	@$(CC) $(FLAG) $(RUSH) ./rushes/rush03.c -o rush-03
	@$(CC) $(FLAG) $(RUSH) ./rushes/rush04.c -o rush-04
	@$(CC) $(FLAG) $(INCLUDE) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)
	@rm -f rush-0*

fclean: clean

re: fclean all
