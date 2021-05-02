/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:15:59 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/02 15:15:59 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"
#include <ctype.h>

void test_ft_isalpha(void)
{
    printf("Start %s\n", __func__);

	for(int i = 0; i < 1024; i++) {
		if (ft_isalpha(i) != isalpha(i)) printf("%s %s %X\n", __func__, "test 1 fail: wrong rezult ", i);
	}
}
