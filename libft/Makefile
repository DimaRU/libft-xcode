# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/01/31 18:28:53 by ssantiag          #+#    #+#             #
#   Updated: 2021/01/31 18:28:53 by ssantiag         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = libft.a
SRCDIR = source
INCLUDE = include
SRCS = $(SRCDIR)/ft_substr.c

OBJS = ${SRCS:.c=.o}
CC		= clang
CFLAGS = -Wall -Wextra -Werror
%.o: %.c $(INCLUDE)/ft.h
		$(CC) -c $(CFLAGS) -I $(INCLUDE) -o $@ $<
$(NAME): ${OBJS}
		ar -rcs ${NAME} ${OBJS}
all:	${NAME}
clean:
		rm -f ${OBJS}
fclean:	clean
		rm ${NAME}
re:		fclean all

.PHONY : clean all fclean re
