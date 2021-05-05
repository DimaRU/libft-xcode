/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:41:33 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/05 17:41:33 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_memccpy(void)
{
	static t_uchar pattern_1[] = { 22, 33, 44, 55, 66 };
	static t_uchar pattern_rezult_1[] = { 22, 33, 44, 55, 5, 6, 7, 8, 9 };
	static t_uchar pattern_2[] = { 11, 12, 13, 14, 15, 16 };
	static t_uchar pattern_rezult_2[] = { 11, 12, 13, 55, 5, 6, 7, 8, 9 };
	static t_uchar pattern_3[] = { 21, 22, 23, 24, 25, 26 };
	static t_uchar pattern_rezult_3[] = { 21, 12, 13, 55, 5, 6, 7, 8, 9 };
	t_uchar pattern_work[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	void *rez;

	printf("Start %s\n", __func__);
	rez = ft_memccpy(pattern_work, pattern_1, 66, 4);
	if (rez != NULL) printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	compare(pattern_rezult_1, pattern_work, sizeof(pattern_work), __func__, "test 1 fail:");

	rez = ft_memccpy(pattern_work, pattern_2, 13, 6);
	if (rez != pattern_work+3) printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	compare(pattern_rezult_2, pattern_work, sizeof(pattern_work), __func__, "test 2 fail:");

	rez = ft_memccpy(pattern_work, pattern_3, 21, 6);
	if (rez != pattern_work+1) printf("%s %s\n", __func__, "test 3 fail: wrong rezult");
	compare(pattern_rezult_3, pattern_work, sizeof(pattern_work), __func__, "test 3 fail:");
}
