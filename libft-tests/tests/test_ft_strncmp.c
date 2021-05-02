/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:40:49 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/02 12:40:49 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_strncmp(void)
{
    printf("Start %s\n", __func__);

	if (ft_strncmp("1", "2", 0) != 0) printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	if (ft_strncmp("", "", 1) != 0) printf("%s %s\n", __func__, "test 2 fail: wrong rezult");
	if (ft_strncmp("123", "12345", 3) != 0) printf("%s %s\n", __func__, "test 3 fail: wrong rezult");
	if (ft_strncmp("123", "211", 10) >= 0) printf("%s %s\n", __func__, "test 4 fail: wrong rezult");
	if (ft_strncmp("321", "123", 10) <= 0) printf("%s %s\n", __func__, "test 5 fail: wrong rezult");
}
