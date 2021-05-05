/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstiter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 23:05:35 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 23:05:35 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

static int current_index;

void iter_func(void *ptr)
{
	if (atoi(ptr) != current_index) nomalloc_printf("%s %s %s!=%d\n", __func__, "test 1 fail: wrong rezult ", ptr, current_index);
	current_index++;
}

void test_ft_lstiter(void)
{
	t_list *list = NULL;
	t_list *element;

	nomalloc_printf("Start %s\n", __func__);

	for (int i = 0; i <= 999; i++) {
		element = ft_lstnew(ft_itoa(i));
		ft_lstadd_back(&list, element);
	}

	current_index = 0;
	ft_lstiter(list, iter_func);

	ft_lstclear(&list, free);
	if (list != NULL) nomalloc_printf("%s %s\n", __func__, "test 2 fail: not null ");
}
