/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:54:07 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/02 14:54:07 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_atoi(void)
{
	char *pattern_list[] = {
		"",
		"+",
		"-",
		"xyzzy",
		"\t\n ++",
		"\t  +1234",
		"\t  +1234xxx",
		"\t-1234",
		"\t-1234xxx",
		"-1234",
		"-1234xxx",
		"2147483647",
		"-2147483648",
		"9999999999999",
		"-98888888858923802840239840298409280498"
		"988888888589238028402398402984092804988"
	};
	
	int rezult_ft;
	int rezult_lib;
	char *pattern;

    printf("Start %s\n", __func__);

	for(size_t i = 0; i < sizeof(pattern_list)/sizeof(char*); i++) {
		pattern = pattern_list[i];
		rezult_lib = atoi(pattern);
		rezult_ft = ft_atoi(pattern);
		if (rezult_ft != rezult_lib) printf("%s test %ld fail: %d must be %d pattern: '%s'\n", __func__, i, rezult_ft, rezult_lib, pattern);
	}
}
