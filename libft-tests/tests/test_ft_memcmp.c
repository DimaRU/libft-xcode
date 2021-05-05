/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:41:48 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/05 17:41:48 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_memcmp(void)
{
	static t_uchar pattern_a[] = { 0, 1, 2, 3, 255, 5, 6, 7, 8 };
	static t_uchar pattern_b[] = { 0, 1, 2, 3, 255, 5, 6, 7, 8 };
	static t_uchar pattern_c[] = { 0, 1, 2, 3, 1, 5, 6, 7, 8 };
	static t_uchar pattern_d[] = { 0, 1, 2, 3, 255, 5, 6, 7, 9 };

	printf("Start %s\n", __func__);
	if (ft_memcmp(pattern_a, pattern_c, 0) != 0) printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	if (ft_memcmp(pattern_a, pattern_b, sizeof(pattern_a)) != 0) printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	if (ft_memcmp(pattern_a, pattern_c, sizeof(pattern_a)) <= 0) printf("%s %s\n", __func__, "test 3 fail: wrong rezult");
	if (ft_memcmp(pattern_a, pattern_d, sizeof(pattern_a)) >= 0) printf("%s %s\n", __func__, "test 4 fail: wrong rezult");
}
