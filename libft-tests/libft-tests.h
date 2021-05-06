/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft-test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 08:50:02 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/20 08:50:02 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft_test_h
#define libft_test_h
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <malloc/malloc.h>

extern void _simple_vdprintf(int, const char *, va_list);
static inline void nomalloc_printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	_simple_vdprintf(STDOUT_FILENO, format, ap);
	va_end(ap);
}

typedef unsigned char	t_uchar;
// Common tools
void compare(t_uchar *a, t_uchar *b, size_t n, const char *name, char *error_message);
void compare_s(char *a, char *b, size_t n, const char *name, char *error_message);
void checkzero_and_free(char *ptr, size_t size, size_t alloc_size, int test_no, const char *name);
void checkpattern_and_free(char *ptr, const char *pattern, size_t alloc_size, int test_no, const char *name);
void check_malloc(void *ptr, size_t alloc_size, int test_no, const char *name);

// Test per function
void test_ft_bzero(void);
void test_ft_memset(void);
void test_ft_memcpy(void);
void test_ft_memccpy(void);
void test_ft_memmove(void);
void test_ft_memchr(void);
void test_ft_memcmp(void);
void test_ft_strlen(void);
void test_ft_strlcpy(void);
void test_ft_strlcat(void);
void test_ft_strchr(void);
void test_ft_strrchr(void);
void test_ft_strnstr(void);
void test_ft_strncmp(void);
void test_ft_atoi(void);
void test_ft_isalpha(void);
void test_ft_isdigit(void);
void test_ft_isalnum(void);
void test_ft_isascii(void);
void test_ft_isprint(void);
void test_ft_tolower(void);
void test_ft_toupper(void);
void test_ft_substr(void);
void test_ft_strjoin(void);
void test_ft_strtrim(void);
void test_ft_split(void);
void test_ft_itoa(void);
void test_ft_strmapi(void);
void test_ft_putchar_fd(void);
void test_ft_putstr_fd(void);
void test_ft_putendl_fd(void);
void test_ft_putnbr_fd(void);
void test_ft_strdup(void);
void test_ft_calloc(void);
void test_ft_substr(void);
void test_ft_lstnew(void);
void test_ft_lstadd_front(void);
void test_ft_lstsize(void);
void test_ft_lstlast(void);
void test_ft_lstadd_back(void);
void test_ft_lstdelone(void);
void test_ft_lstclear(void);
void test_ft_lstiter(void);
void test_ft_lstmap(void);

#endif /* libft_test_h */
