/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_common.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 09:53:08 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/20 09:53:08 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"
#include <stdio.h>

void compare_s(char *a, char *b, size_t n, const char *name, char *error_message)
{
	compare((t_uchar*)a, (t_uchar*)b, n, name, error_message);
}

void compare(t_uchar *a, t_uchar *b, size_t n, const char *name, char *error_message)
{
	for (size_t i = 0; i < n; i++) {
		if (a[i] != b[i]) printf("%s %s: %ld %d != %d\n", name, error_message, i, a[i], b[i]);
	}
}

void checkzero_and_free(char *ptr, size_t size, size_t alloc_size, int test_no, const char *name)
{
	if (ptr == NULL) {
		printf("%s test %d fail: NULL returned\n", name, test_no);
		return;
	}
	for (size_t i = 0; i < size; i++) {
		if (ptr[i] != '\0') printf("%s test %d fail: not zeroed\n", name, test_no);
	}
	if (malloc_size(ptr) != alloc_size) printf("%s test %d fail: wrong alloc size\n", name, test_no);
	free(ptr);
}

void checkpattern_and_free(char *ptr, const char *pattern, size_t alloc_size, int test_no, const char *name)
{
	if (ptr == NULL) {
		printf("%s test %d fail: NULL returned\n", name, test_no);
		return;
	}
	if (strcmp(ptr, pattern) != 0)
		printf("%s test %d fail: pattern not math\n", name, test_no);
	if (malloc_size(ptr) != alloc_size) printf("%s test %d fail: wrong alloc size\n", name, test_no);
	free(ptr);
}
