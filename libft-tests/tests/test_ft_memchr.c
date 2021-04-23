/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 09:37:53 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/23 09:37:53 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_memchr(void)
{
	static t_uchar pattern_rezult_1[] = { 0, 1, 2, 3, 255, 5, 6, 7, 8 };
	static t_uchar pattern_work[] = { 0, 1, 2, 3, 255, 5, 6, 7, 8 };
	void *rez;

	printf("Start %s\n", __func__);
	rez = ft_memchr(pattern_work, -1, 0);
	if (rez != NULL) printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	compare(pattern_rezult_1, pattern_work, sizeof(pattern_work), __func__, "test 1 fail:");

	rez = ft_memchr(pattern_work, 10, sizeof(pattern_work));
	if (rez != NULL) printf("%s %s\n", __func__, "test 2 fail: wrong rezult");

	rez = ft_memchr(pattern_work, -1, sizeof(pattern_work));
	if (rez != pattern_work + 4) printf("%s %s\n", __func__, "test 3 fail: wrong rezult");
}
