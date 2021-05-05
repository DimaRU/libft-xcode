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

// defined in Libc/gen/malloc.c
#define MALLOC_LOG_TYPE_ALLOCATE   2
#define MALLOC_LOG_TYPE_DEALLOCATE 4
#define MALLOC_LOG_TYPE_HAS_ZONE   8
#define MALLOC_LOG_TYPE_CLEARED    64
#define MALLOC_OP_MALLOC  (MALLOC_LOG_TYPE_ALLOCATE|MALLOC_LOG_TYPE_HAS_ZONE)
#define MALLOC_OP_CALLOC  (MALLOC_OP_MALLOC|MALLOC_LOG_TYPE_CLEARED)
#define MALLOC_OP_REALLOC (MALLOC_OP_MALLOC|MALLOC_LOG_TYPE_DEALLOCATE)
#define MALLOC_OP_FREE    (MALLOC_LOG_TYPE_DEALLOCATE|MALLOC_LOG_TYPE_HAS_ZONE)

typedef void (malloc_logger_t)(unsigned, unsigned, unsigned, unsigned, unsigned,  unsigned);
// declared in the Libc malloc implementation
extern malloc_logger_t *malloc_logger;

int malloc_count = 0;

void print_malloc_record(unsigned type, unsigned arg1, unsigned arg2, unsigned arg3,
						 unsigned result, unsigned num_hot_frames_to_skip)
{
	(void)num_hot_frames_to_skip;
	switch (type) {
		case MALLOC_OP_MALLOC: // malloc() or valloc()
		case MALLOC_OP_CALLOC:
			malloc_count++;
//			nomalloc_printf("%s : zone=%p, size=%u, pointer=%p\n",
//							(type == MALLOC_OP_MALLOC) ? "malloc" : "calloc",
//							arg1, arg2, result);
			break;
		case MALLOC_OP_REALLOC:
			nomalloc_printf("realloc: zone=%p, size=%u, old pointer=%p, ",
							"new pointer=%p\n", arg1, arg3, arg2, result);
			break;
		case MALLOC_OP_FREE:
			malloc_count--;
//			nomalloc_printf("free   : zone=%p, pointer=%p\n", arg1, arg2);
			break;
	}
}

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
		test_ft_strdup,
		test_ft_calloc,
		test_ft_substr,
		test_ft_strjoin,
		test_ft_strtrim,
		test_ft_split,
		test_ft_itoa,
		test_ft_strmapi,
		test_ft_putchar_fd,
		test_ft_putstr_fd,
		test_ft_putendl_fd,
		test_ft_putnbr_fd,
		
		test_ft_lstnew,
		test_ft_lstadd_front,
		test_ft_lstsize,
		test_ft_lstlast,
		test_ft_lstadd_back,
		test_ft_lstdelone,
		test_ft_lstclear,
		test_ft_lstiter,
		test_ft_lstmap,
	};

	malloc_logger = print_malloc_record;

	for (size_t i = 0; i < sizeof(test_list)/sizeof(test_func); i++) {
		test_list[i]();
		if (malloc_count != 0) nomalloc_printf("Possible memory leak: %d\n", malloc_count);
	}

	return (0);
}
