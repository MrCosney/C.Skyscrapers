# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cosney <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/24 04:58:20 by cosney            #+#    #+#              #
#    Updated: 2020/04/24 04:59:32 by cosney           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = towers

FILES = srcs/*.c

INCLUDES = includes/

all: $(NAME)

$(NAME):
	@gcc $(FILES) -I$(INCLUDES) -o $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
