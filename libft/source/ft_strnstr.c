/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:01:04 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/02 14:01:04 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*ptr;
	size_t		offset;

	if (*little == '\0')
		return ((char *)big);
	ptr = big - 1;
	while (++ptr < big + len)
	{
		offset = 0;
		while (ptr[offset] != '\0' && ptr + offset != big + len)
		{
			if (ptr[offset] != little[offset])
				break ;
			if (little[++offset] == '\0')
				return ((char *)ptr);
		}
	}
	return (NULL);
}
