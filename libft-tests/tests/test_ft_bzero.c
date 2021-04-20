/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 09:45:53 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/20 09:45:53 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_bzero(void)
{
	static t_uchar pattern_src[] = { 1, 2, 3, 4, 5, 6, 7 };
	static t_uchar pattern_dst[] = { 0, 0, 0, 0, 5, 6, 7 };
	t_uchar pattern_work[] = { 1, 2, 3, 4, 5, 6, 7 };

	ft_bzero(pattern_work, 0);
	compare(pattern_src, pattern_work, sizeof(pattern_src), "ft_bzero test 1 fail:");
	ft_bzero(pattern_work, 4);
	compare(pattern_dst, pattern_work, sizeof(pattern_src), "ft_bzero test 2 fail:");
}
