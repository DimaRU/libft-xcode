/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:01:07 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/02 14:01:07 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_strnstr(void)
{
	static char *pattern1 = "123456789";

	printf("Start %s\n", __func__);
	if (ft_strnstr(pattern1, "", 0) != pattern1) printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	if (ft_strnstr(pattern1, "234", sizeof(pattern1)) != pattern1+1) printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	if (ft_strnstr(pattern1, "234", 3) != NULL) printf("%s %s\n", __func__, "test 3 fail: wrong rezult");
	if (ft_strnstr(pattern1, "789", 9) != pattern1 + 6) printf("%s %s\n", __func__, "test 4 fail: wrong rezult");
	if (ft_strnstr(pattern1, "789", 10) != pattern1 + 6) printf("%s %s\n", __func__, "test 5 fail: wrong rezult");
	if (ft_strnstr(pattern1, "788", 9) != NULL) printf("%s %s\n", __func__, "test 6 fail: wrong rezult");
}
