//
//  test_ft_isascii.c
//  libft-tests
//
//  Created by Dmitriy Borovikov on 02.05.2021.
//

#include "libft-tests.h"
#include <ctype.h>

void test_ft_isascii(void)
{
    printf("Start %s\n", __func__);

	for(int i = 0; i < 1024; i++) {
		if (ft_isascii(i) != isascii(i)) printf("%s %s %X\n", __func__, "test 1 fail: wrong rezult ", i);
	}
}
