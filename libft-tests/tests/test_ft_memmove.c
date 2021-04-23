/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 08:55:43 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/23 08:55:43 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_memmove(void)
{
	static t_uchar pattern_1[] = { 22, 33, 44, 55, 66 };
	static t_uchar pattern_rezult_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	static t_uchar pattern_2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	static t_uchar pattern_rezult_2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	static t_uchar pattern_rezult_3[] = { 3, 4, 5, 4, 5, 6, 7, 8, 9 };
	static t_uchar pattern_rezult_4[] = { 3, 4, 5, 4, 5, 6, 3, 4, 5 };
	t_uchar pattern_work[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	void *rez;

	printf("Start %s\n", __func__);
	rez = ft_memmove(pattern_work, pattern_1, 0);
	if (rez != pattern_work) printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	compare(pattern_rezult_1, pattern_work, sizeof(pattern_work), __func__, "test 1 fail:");

	rez = ft_memmove(pattern_work, pattern_2, sizeof(pattern_2));
	if (rez != pattern_work) printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	compare(pattern_rezult_2, pattern_work, sizeof(pattern_work), __func__, "test 2 fail:");

	rez = ft_memmove(pattern_work, pattern_work+2, 3);
	if (rez != pattern_work) printf("%s %s\n", __func__, "test 3 fail: wrong rezult");
	compare(pattern_rezult_3, pattern_work, sizeof(pattern_work), __func__, "test 3 fail:");

	rez = ft_memmove(pattern_work+6, pattern_work, 3);
	if (rez != pattern_work+6) printf("%s %s\n", __func__, "test 4 fail: wrong rezult");
	compare(pattern_rezult_4, pattern_work, sizeof(pattern_work), __func__, "test 4 fail:");
}
