//
//  ft_isprint.c
//  libft-tests
//
//  Created by Dmitriy Borovikov on 02.05.2021.
//

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 040 && c <= 0176);
}
