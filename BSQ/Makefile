# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/10 20:50:50 by abhaviri          #+#    #+#              #
#    Updated: 2018/07/11 21:47:52 by abhaviri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
FLAG = -Wall -Wextra -Werror -O3
SRC = bsq.c main.c solve.c strhelpers.c strhelpers2.c

all: $(NAME)

$(NAME):
	@gcc $(FLAG) -o $(NAME) $(SRC)

clean:
	@/bin/rm -f

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
