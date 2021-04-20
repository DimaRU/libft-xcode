/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 21:36:27 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/19 21:36:27 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef unsigned char	t_uchar;

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	t_uchar	*temp;

	temp = dst;
	while (n-- != 0)
	{
		*temp++ = *(t_uchar *)src++;
	}
	return (dst);
}
