/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 20:30:28 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 20:30:28 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_putendl_fd(void)
{
    nomalloc_printf("Start %s\n", __func__);

	ft_putendl_fd("OK", STDOUT_FILENO);
}
