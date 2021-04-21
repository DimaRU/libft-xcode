/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_common.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 09:53:08 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/20 09:53:08 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"
#include <stdio.h>

void compare(t_uchar *a, t_uchar *b, size_t n, const char *name, char *error_message)
{
	for (size_t i = 0; i < n; i++) {
		if (a[i] != b[i]) printf("%s %s: %ld %d != %d\n", name, error_message, i, a[i], b[i]);
	}
}
