/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:48:25 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/03 13:48:25 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_strdup(void)
{
	char pattern1[] = "";
	char pattern2[] = "1234";
	char pattern3[] = "123456789 123456";
	char *rezult;

    nomalloc_printf("Start %s\n", __func__);

	rezult = ft_strdup(pattern1);
	compare_s(pattern1, rezult, sizeof(pattern1), __func__, "test 1 fail:");
	check_malloc(rezult, 1, 1, __func__);
	free(rezult);

	rezult = ft_strdup(pattern2);
	compare_s(pattern2, rezult, sizeof(pattern2), __func__, "test 2 fail:");
	check_malloc(rezult, 5, 2, __func__);
	free(rezult);

	rezult = ft_strdup(pattern3);
	compare_s(pattern3, rezult, sizeof(pattern3), __func__, "test 3 fail:");
	check_malloc(rezult, 17, 3, __func__);
	free(rezult);
}
