/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:41:28 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/23 15:41:28 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_strlen(void)
{
	char *str1 = "";
	char *str2 = "1234";
	char *str3 = "abcdef\xff";

    nomalloc_printf("Start %s\n", __func__);
	if (ft_strlen(str1) != 0) nomalloc_printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	if (ft_strlen(str2) != 4) nomalloc_printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	if (ft_strlen(str3) != 7) nomalloc_printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
}
