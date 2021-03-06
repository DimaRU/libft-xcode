/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:32:36 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 10:32:36 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_strjoin(void)
{
	nomalloc_printf("Start %s\n", __func__);

	if (ft_strjoin("123", NULL) != NULL) nomalloc_printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	if (ft_strjoin(NULL, "456") != NULL) nomalloc_printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	checkpattern_and_free(ft_strjoin("", ""), "", 1, 3, __func__);
	checkpattern_and_free(ft_strjoin("12345", ""), "12345", 6, 4, __func__);
	checkpattern_and_free(ft_strjoin("", "12345"), "12345", 6, 5, __func__);
	checkpattern_and_free(ft_strjoin("12345", "6789"), "123456789", 10, 6, __func__);
}
