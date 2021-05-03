/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:57:43 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/03 15:57:43 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"
#include <limits.h>

void check_and_free(char *ptr, size_t size, size_t alloc_size, int test_no, const char *name)
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

void test_ft_calloc(void)
{
    printf("Start %s\n", __func__);

	if (calloc(INT_MAX, LONG_MAX) != NULL) printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	if (calloc(LONG_MAX, LONG_MAX) != NULL) printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	check_and_free(calloc(0, 0), 1, 16, 3, __func__);
	check_and_free(calloc(10, 0), 1, 16, 4, __func__);
	check_and_free(calloc(0, 10), 1, 16, 5, __func__);
	check_and_free(calloc(1, 1), 1, 16, 6, __func__);
	check_and_free(calloc(10, 1), 10, 16, 7, __func__);
	check_and_free(calloc(1, 1024), 1024, 1024, 8, __func__);
}
