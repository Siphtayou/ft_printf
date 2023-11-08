# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agilles <agilles@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 16:14:24 by agilles           #+#    #+#              #
#    Updated: 2023/11/08 15:18:17 by agilles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIB = libft/libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC =	ft_printf.c\
		ft_put_s.c\
		ft_putchar.c\
		ft_put_di.c\
		ft_put_u.c\
		main.c\
OBJ = $(SRC:.c=.o)

all : $(NAME)

clean :
	rm -f $(OBJ)
	rm -f $(LIB)
	rm -f libft/*.o

fclean : clean
	rm -f $(NAME)


re : fclean all

$(LIB) :
	$(MAKE) -C $$(dirname $@)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ) $(LIB)
	cp $(LIB) $(NAME)
	ar rcs $(NAME) $(OBJ)


