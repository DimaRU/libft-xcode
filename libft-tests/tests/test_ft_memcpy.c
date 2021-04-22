//
//  test_ft_memcpy.c
//  libft-tests
//
//  Created by Dmitriy Borovikov on 22.04.2021.
//

#include "libft-tests.h"

void test_ft_memcpy(void)
{
	static t_uchar pattern_src[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	static t_uchar pattern_dst[] = { 1, 22, 33, 44, 55, 6, 7, 8, 9 };
	static t_uchar pattern_cpy[] = { 22, 33, 44, 55 };
	t_uchar pattern_work[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("Start %s\n", __func__);
	ft_memcpy(pattern_work, pattern_src, 0);
	compare(pattern_src, pattern_work, sizeof(pattern_src), __func__, "test 1 fail:");
	ft_memcpy(pattern_work+1, pattern_cpy, sizeof(pattern_cpy));
	compare(pattern_dst, pattern_work, sizeof(pattern_work), __func__, "test 2 fail:");
}
