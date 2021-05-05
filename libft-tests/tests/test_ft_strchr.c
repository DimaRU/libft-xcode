/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 11:51:29 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/02 11:51:29 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_strchr(void)
{
	static char *pattern1 = "1234567891";

	nomalloc_printf("Start %s\n", __func__);
	if (ft_strchr(pattern1, 'a') != NULL) nomalloc_printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	if (ft_strchr(pattern1, '2') != pattern1 + 1) nomalloc_printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	if (ft_strchr(pattern1, '\0') != pattern1 + 10) nomalloc_printf("%s %s\n", __func__, "test 3 fail: wrong rezult");
}
