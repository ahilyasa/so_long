# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iyarikan <iyarikan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 01:29:20 by iyarikan          #+#    #+#              #
#    Updated: 2022/04/04 14:24:48 by iyarikan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= so_long
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
SRCS		= $(wildcard srcs/*.c)
OBJS		= $(SRCS:%.c=%.o)
$(NAME):	$(OBJS)
			make -C ./mlx
			$(CC) $(CFLAGS) $(SRCS) libft/libft.a printf/libftprintf.a -framework OpenGL -framework AppKit mlx/libmlx.a -o $(NAME)

all: 		$(NAME)

clean:
			make -C ./mlx clean
			rm -rf */*.o libmlx.a so_long.o

fclean: 	clean
			rm -rf so_long

re: 		fclean all

.PHONY: 	all clean fclean re
