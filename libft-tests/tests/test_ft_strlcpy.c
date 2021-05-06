/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:41:39 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/23 15:41:39 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_strlcpy(void)
{
	static char *pattern1 = "123456789";
	static char *str2 = "abcd";
	static char pattern2[] = { 'a', 'b', 'c', 'd', 0, '6', '7', '8', '9' };
	static char *str3 = "xyz";
	static char pattern3[] = { 'x', 0, 'c', 'd', 0, '6', '7', '8', '9' };
	char str_dest[] = "123456789";

    nomalloc_printf("Start %s\n", __func__);
	if (ft_strlcpy(str_dest, pattern1, 0) != 9) nomalloc_printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	compare_s(pattern1, str_dest, sizeof(pattern1), __func__, "test 1 fail:");
	if (ft_strlcpy(str_dest, str2, 9) != 4) nomalloc_printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	compare_s(pattern2, str_dest, sizeof(pattern2), __func__, "test 2 fail:");
	if (ft_strlcpy(str_dest, str3, 2) != 3) nomalloc_printf("%s %s\n", __func__, "test 3 fail: wrong rezult");
	compare_s(pattern3, str_dest, sizeof(pattern3), __func__, "test 3 fail:");
}
