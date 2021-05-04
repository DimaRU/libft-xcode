/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:32:42 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 10:32:42 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_strtrim(void)
{
    printf("Start %s\n", __func__);

	if (ft_strtrim(NULL, "123") != NULL) printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	checkpattern_and_free(ft_strtrim("", NULL), "", 16, 2, __func__);
	checkpattern_and_free(ft_strtrim("123", ""), "123", 16, 3, __func__);
	checkpattern_and_free(ft_strtrim("", "123"), "", 16, 4, __func__);
	checkpattern_and_free(ft_strtrim("1234ab123cd456", "12345678"), "ab123cd", 16, 5, __func__);
}
