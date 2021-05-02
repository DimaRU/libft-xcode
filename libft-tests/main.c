/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 09:02:57 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/15 09:02:57 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft-tests.h"
#include <stdio.h>

typedef void (*test_func)(void);

int	main(void)
{
	static test_func test_list[] = {
		test_ft_bzero,
		test_ft_memset,
		test_ft_memcpy,
		test_ft_memccpy,
		test_ft_memmove,
		test_ft_memchr,
		test_ft_memcmp,
		test_ft_strlen,
		test_ft_strlcpy,
		test_ft_strlcat,
		test_ft_strchr,
		test_ft_strrchr,
		test_ft_strnstr,
		test_ft_strncmp,
		test_ft_atoi,
		test_ft_isalpha,
		test_ft_isdigit,
		test_ft_isalnum,
		test_ft_isascii,
		test_ft_isprint,
		test_ft_tolower,
		test_ft_toupper,
//		test_ft_substr,
//		test_ft_strjoin,
//		test_ft_strtrim,
//		test_ft_split,
//		test_ft_itoa,
//		test_ft_strmapi,
//		test_ft_putchar_fd,
//		test_ft_putstr_fd,
//		test_ft_putendl_fd,
//		test_ft_putnbr_fd,
//		test_strdup,
//		test_ft_substr,
//		test_ft_lstnew,
//		test_ft_lstadd_front,
//		test_ft_lstsize,
//		test_ft_lstlast,
//		test_ft_lstadd_back,
//		test_ft_lstdelone,
//		test_ft_lstclear,
//		test_ft_lstiter,
//		test_ft_lstmap,
	};

	for (size_t i = 0; i < sizeof(test_list)/sizeof(test_func); i++) {
		test_list[i]();
	}

	return (0);
}
