# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miarzuma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/13 21:18:09 by miarzuma          #+#    #+#              #
#    Updated: 2021/08/17 17:12:51 by miarzuma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Minitalk
SRCS		= server.c client.c
OBJS		= $(SRCS:.c=.o)
CFLAGS		= -Wall -Wextra -Werror
CC			= gcc
RM			= rm -f
INCLUDES	= libft

LIBFT		= ./libft
LINKERS		= -L$(LIBFT) -lft

all:		$(NAME)

.c.o:		
			$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $(<:.c=.o)

$(NAME):	client.o server.o
			$(MAKE) bonus -C $(LIBFT)
			$(CC) $(CFLAGS) -I$(INCLUDES) $(LINKERS) client.o -o client
			$(CC) $(CFLAGS) -I$(INCLUDES) $(LINKERS) server.o -o server

clean:		
			$(MAKE) clean -C $(LIBFT)
			$(RM) $(OBJS)

fclean:		clean
			$(MAKE) clean -C $(LIBFT)
			$(RM) client server

re:			fclean all

.PHONY:		all clean fclean re .c.o
