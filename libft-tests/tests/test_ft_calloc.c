/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:57:43 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/03 15:57:43 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"
#include <limits.h>

void test_ft_calloc(void)
{
    nomalloc_printf("Start %s\n", __func__);

	if (ft_calloc(INT_MAX, LONG_MAX) != NULL) nomalloc_printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	if (ft_calloc(LONG_MAX, LONG_MAX) != NULL) nomalloc_printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	checkzero_and_free(ft_calloc(0, 0), 1, 1, 3, __func__);
	checkzero_and_free(ft_calloc(10, 0), 1, 1, 4, __func__);
	checkzero_and_free(ft_calloc(0, 10), 1, 1, 5, __func__);
	checkzero_and_free(ft_calloc(1, 1), 1, 1, 6, __func__);
	checkzero_and_free(ft_calloc(10, 1), 10, 10, 7, __func__);
	checkzero_and_free(ft_calloc(1, 512), 512, 512, 8, __func__);
}
