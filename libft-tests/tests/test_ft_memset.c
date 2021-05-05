/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 21:06:23 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/21 21:06:23 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_memset(void)
{
	static t_uchar pattern_src[] = { 1, 2, 3, 4, 5, 6, 7 };
	static t_uchar pattern_dst[] = { 9, 9, 9, 9, 9, 6, 7 };
	t_uchar pattern_work[] = { 1, 2, 3, 4, 5, 6, 7 };

	nomalloc_printf("Start %s\n", __func__);
	ft_memset(pattern_work, 99, 0);
	compare(pattern_src, pattern_work, sizeof(pattern_src), __func__, "test 1 fail:");
	ft_memset(pattern_work, 9, 5);
	compare(pattern_dst, pattern_work, sizeof(pattern_src), __func__, "test 2 fail:");

}
