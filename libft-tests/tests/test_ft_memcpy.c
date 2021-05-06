/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:41:27 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/05 17:41:27 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_memcpy(void)
{
	static t_uchar pattern_src[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	static t_uchar pattern_dst[] = { 1, 22, 33, 44, 55, 6, 7, 8, 9 };
	static t_uchar pattern_cpy[] = { 22, 33, 44, 55 };
	t_uchar pattern_work[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	nomalloc_printf("Start %s\n", __func__);
	if (ft_memcpy(NULL, NULL, 10) != NULL) nomalloc_printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	if (ft_memcpy(pattern_work, pattern_src, 0) != pattern_work) nomalloc_printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	compare(pattern_src, pattern_work, sizeof(pattern_src), __func__, "test 2 fail:");
	if (ft_memcpy(pattern_work+1, pattern_cpy, sizeof(pattern_cpy)) != pattern_work+1) nomalloc_printf("%s %s\n", __func__, "test 3 fail: wrong rezult");
	compare(pattern_dst, pattern_work, sizeof(pattern_work), __func__, "test 3 fail:");
}
