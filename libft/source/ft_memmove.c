/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 08:55:47 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/23 08:55:47 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef unsigned char	t_uchar;

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	t_uchar	*temp;

	temp = dst;
	if (src > dst)
	{
		while (len-- > 0)
			*temp++ = *(t_uchar *)src++;
	}
	else if (src < dst)
	{
		temp += len - 1;
		src += len - 1;
		while (len-- > 0)
			*temp-- = *(t_uchar *)src--;
	}
	return (dst);
}
