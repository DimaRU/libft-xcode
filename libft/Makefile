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

SRCDIR = source
INCLUDE = include
SRC =	ft_toupper.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c

SRCB =	ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c

OBJ    = ${SRC:.c=.o}
OBJB   = ${SRCB:.c=.o}

NAME   = libft.a
CC     = gcc
AR     = ar -rcs
CFLAGS = -Wall -Wextra -Werror
CFLAGS_TEST = -Wextra -Wall -Werror -g3 -fsanitize=address

all:	${NAME}

$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)

bonus: all $(OBJB)
		$(AR) $(NAME) $(OBJB) $(OBJ)

%.o: %.c $(INCLUDE)/libft.h
		$(CC) -c $(CFLAGS_TEST) -I $(INCLUDE) -o $@ $<

clean:
		rm -f $(OBJ)
		rm -f $(OBJB)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY : clean all fclean re bonus test
