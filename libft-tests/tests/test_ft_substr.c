/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:33:59 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 10:33:59 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_substr(void)
{
	char *pattern1 = "123456789";

    nomalloc_printf("Start %s\n", __func__);

	if (ft_substr(NULL, 0, 0) != NULL) nomalloc_printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	checkpattern_and_free(ft_substr(pattern1, 0, 0), "", 1, 2, __func__);
	checkpattern_and_free(ft_substr(pattern1, 0, 1), "1", 2, 3, __func__);
	checkpattern_and_free(ft_substr(pattern1, 1, 100), "23456789", 9, 4, __func__);
	checkpattern_and_free(ft_substr(pattern1, 20, 100), "", 1, 5, __func__);
}
