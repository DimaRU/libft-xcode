/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 19:52:26 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 19:52:26 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

static char mapi1(unsigned int i, char c)
{
	(void)c;
	return 'a' + i;
}

static char mapi2(unsigned int i, char c)
{
	(void)i;
	return c - 1;
}

void test_ft_strmapi(void)
{
    nomalloc_printf("Start %s\n", __func__);

	checkpattern_and_free(ft_strmapi("", mapi1), "", 1, 1, __func__);
	checkpattern_and_free(ft_strmapi("54321", mapi1), "abcde", 6, 1, __func__);
	checkpattern_and_free(ft_strmapi("54321", mapi1), "abcde", 6, 1, __func__);
	checkpattern_and_free(ft_strmapi("654321", mapi2), "543210", 7, 1, __func__);
}
