/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 19:20:17 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 19:20:17 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_itoa(void)
{
    nomalloc_printf("Start %s\n", __func__);

	checkpattern_and_free(ft_itoa(0), "0", 16, 1, __func__);
	checkpattern_and_free(ft_itoa(-1), "-1", 16, 1, __func__);
	checkpattern_and_free(ft_itoa(1), "1", 16, 1, __func__);
	checkpattern_and_free(ft_itoa(2147483647), "2147483647", 16, 1, __func__);
	checkpattern_and_free(ft_itoa(-2147483648), "-2147483648", 16, 1, __func__);
}
