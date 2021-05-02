/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:17:48 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/02 12:17:48 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_strrchr(void)
{
	static char *pattern1 = "1234567891";
	static char *pattern2 = "123456789";
	static char *pattern3 = "";

	printf("Start %s\n", __func__);
	if (ft_strrchr(pattern1, 'a') != NULL) printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	if (ft_strrchr(pattern1, '2') != pattern1 + 1) printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	if (ft_strrchr(pattern1, '1') != pattern1 + 9) printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	if (ft_strrchr(pattern1, '\0') != pattern1 + 10) printf("%s %s\n", __func__, "test 3 fail: wrong rezult");
	if (ft_strrchr(pattern2, '1') != pattern2) printf("%s %s\n", __func__, "test 4 fail: wrong rezult");
	if (ft_strrchr(pattern3, '\0') != pattern3) printf("%s %s\n", __func__, "test 5 fail: wrong rezult");
}
