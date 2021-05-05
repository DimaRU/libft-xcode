/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:39:58 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/05 17:39:58 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"
#include <ctype.h>

void test_ft_isdigit(void)
{
    nomalloc_printf("Start %s\n", __func__);

	for(int i = 0; i < 1024; i++) {
		if (ft_isdigit(i) != isdigit(i)) nomalloc_printf("%s %s %X\n", __func__, "test 1 fail: wrong rezult ", i);
	}
}
