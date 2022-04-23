# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miarzuma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/26 20:58:05 by miarzuma          #+#    #+#              #
#    Updated: 2021/02/04 13:40:17 by miarzuma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= $(shell find "." -name "*.c" ! -name "ft_lst*.c")

OBJS		= ${SRCS:.c=.o}

BONUSES		= $(shell find "." -name "ft_lst*.c")

BONUS_OBJS 	= ${BONUSES:.c=.o}

NAME		= libft.a

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

AR			= ar csr

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} libft.a ${OBJS}

all:		${NAME}

bonus :		${BONUS_OBJS}
			${AR} libft.a ${BONUS_OBJS}

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean bonus re .c.o
