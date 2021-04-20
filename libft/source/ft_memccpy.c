/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 21:41:27 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/19 21:41:27 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef unsigned char	t_uchar;

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- != 0)
	{
		*(t_uchar *)dst++ = *(t_uchar *)src;
		if (*(t_uchar *)src++ == (t_uchar)c)
			return (dst);
	}
	return (NULL);
}
