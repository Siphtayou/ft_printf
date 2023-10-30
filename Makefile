# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agilles <agilles@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 16:14:24 by agilles           #+#    #+#              #
#    Updated: 2023/10/30 17:15:16 by agilles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC =
OBJ = $(SRC:.c=.o)

all : $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	ar rcs $@ $^
