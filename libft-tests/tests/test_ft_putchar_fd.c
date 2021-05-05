/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:41:02 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/05 17:41:02 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_putchar_fd(void)
{
    nomalloc_printf("Start %s\n", __func__);
	
	ft_putchar_fd('O', STDOUT_FILENO);
	ft_putchar_fd('K', STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
}
