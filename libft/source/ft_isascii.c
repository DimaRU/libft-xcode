//
//  ft_isascii.c
//  libft-tests
//
//  Created by Dmitriy Borovikov on 02.05.2021.
//

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 0177);
}
