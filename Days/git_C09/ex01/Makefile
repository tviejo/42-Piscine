# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tviejo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 16:59:11 by tviejo            #+#    #+#              #
#    Updated: 2024/02/29 17:17:29 by tviejo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	libft.a

SRC_DIR		=	./srcs/

SRC		=	ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRCS		=	${addprefix ${SRC_DIR}, ${SRC}}

OBJS		=	${SRCS:.c=.o}

HEAD		=	./includes/

CC		=	cc

CFLAGS		=	-Wall -Wextra -Werror

AR		=	ar rc

RM		=	rm -f

.c.o:
			${CC} ${CFLAGS} -c -I ${HEAD} $< -o $@

${NAME}:		${OBJS}
				${AR} ${NAME} ${OBJS}

all:			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re
