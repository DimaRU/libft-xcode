/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 19:19:25 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 19:19:25 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

size_t round_to_16(size_t size)
{
	return ((size + 15) / 16) * 16;
}

void checksplit_and_free(char **ptr, const char *pattern[], int test_no, const char *name)
{
	int count;
	if (ptr == NULL) {
		printf("%s test %d fail: NULL returned\n", name, test_no);
		return;
	}
	for (count = 0; pattern[count] != NULL; count++) {
		if (ptr[count] == NULL) {
			printf("%s test %d fail: NULL string\n", name, test_no);
			return;
		}
		if (strcmp(ptr[count], pattern[count]) != 0)
			printf("%s test %d fail: pattern not math\n", name, test_no);
		free(ptr[count]);
	}
	if (malloc_size(ptr) != round_to_16((count + 1) * sizeof(size_t))) printf("%s test %d fail: wrong alloc size\n", name, test_no);
	free(ptr);
}

void test_ft_split(void)
{
	const char *pattern_empty[] = { NULL };
	const char *pattern1[] = {
		"1",
		"2",
		"3",
		"456",
		NULL
	};

    printf("Start %s\n", __func__);

	if (ft_split(NULL, ',') != NULL) printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	checksplit_and_free(ft_split("", ','), pattern_empty, 2, __func__);
	checksplit_and_free(ft_split(",,,,,", ','), pattern_empty, 3, __func__);
	checksplit_and_free(ft_split("1,2,3,456", ','), pattern1, 4, __func__);
	checksplit_and_free(ft_split("  1  2   3  456  ", ' '), pattern1, 5, __func__);
}
