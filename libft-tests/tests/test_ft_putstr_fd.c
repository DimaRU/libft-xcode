/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 20:25:26 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 20:25:26 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_putstr_fd(void)
{
    nomalloc_printf("Start %s\n", __func__);

	ft_putstr_fd("OK\n", STDOUT_FILENO);
}
