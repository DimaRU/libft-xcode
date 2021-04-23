//
//  ft_memcmp.c
//  libft-tests
//
//  Created by Dmitriy Borovikov on 23.04.2021.
//

#include "libft.h"
typedef unsigned char	t_uchar;

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const t_uchar	*str1;
	const t_uchar	*str2;

	str1 = s1;
	str2 = s2;
	while (n-- > 0)
	{
		if (*str1++ == *str2++)
			continue ;
		if (str1[-1] < str2[-1])
			return (-1);
		else
			return (1);
	}
	return (0);
}
