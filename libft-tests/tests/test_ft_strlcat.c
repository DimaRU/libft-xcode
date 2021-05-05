/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 17:34:29 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/24 17:34:29 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_strlcat(void)
{
	size_t rez;

	static char pattern_src1[] = { "1234" };
	static char pattern_work1[] = { 1, 2, 3, 4, 0, 11, 22, 33, 44, 55, 66, 77, 88 };
	static char pattern_rezult_1[] = { 1, 2, 3, 4, 0, 11, 22, 33, 44, 55, 66, 77, 88 };

	static char pattern_src2[] = { "1234" };
	static char pattern_work2[] = { 1, 2, 3, 4, 5, 11, 22, 33, 44, 55, 66, 77, 88 };
	static char pattern_rezult_2[] = { 1, 2, 3, 4, 5, 11, 22, 33, 44, 55, 66, 77, 88 };

	static char pattern_src3[] = { "1234" };
	static char pattern_work3[] = { 1, 2, 3, 4, 0, 11, 22, 33, 44, 55, 66, 77, 88 };
	static char pattern_rezult_3[] = { 1, 2, 3, 4, '1', '2', '3', '4', 0, 55, 66, 77, 88 };

	static char pattern_src4[] = { "1234" };
	static char pattern_work4[] = { 1, 2, 3, 4, 0, 11, 22, 33, 44, 55, 66, 77, 88 };
	static char pattern_rezult_4[] = { 1, 2, 3, 4, '1', '2', 0, 33, 44, 55, 66, 77, 88 };

	nomalloc_printf("Start %s\n", __func__);

	rez = ft_strlcat(pattern_work1, pattern_src1, 0);
	if (rez != 4) nomalloc_printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	compare_s(pattern_rezult_1, pattern_work1, sizeof(pattern_work1), __func__, "test 1 fail:");

	rez = ft_strlcat(pattern_work2, pattern_src2, sizeof(pattern_work2));
	if (rez != 4 + sizeof(pattern_work2)) nomalloc_printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	compare_s(pattern_rezult_2, pattern_work2, sizeof(pattern_work2), __func__, "test 2 fail:");

	rez = ft_strlcat(pattern_work3, pattern_src3, sizeof(pattern_work3));
	if (rez != 8) nomalloc_printf("%s %s\n", __func__, "test 3 fail: wrong rezult");
	compare_s(pattern_rezult_3, pattern_work3, sizeof(pattern_work3), __func__, "test 3 fail:");

	rez = ft_strlcat(pattern_work4, pattern_src4, 7);
	if (rez != 8) nomalloc_printf("%s %s\n", __func__, "test 4 fail: wrong rezult");
	compare_s(pattern_rezult_4, pattern_work4, sizeof(pattern_work4), __func__, "test 4 fail:");
}
