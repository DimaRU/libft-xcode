//
//  test_ft_putchar_fd.c
//  libft-tests
//
//  Created by Dmitriy Borovikov on 04.05.2021.
//

#include "libft-tests.h"

void test_ft_putchar_fd(void)
{
    printf("Start %s\n", __func__);
	
	ft_putchar_fd('O', STDOUT_FILENO);
	ft_putchar_fd('K', STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
}
