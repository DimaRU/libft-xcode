/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstclear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 23:05:32 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 23:05:32 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_lstclear(void)
{
	t_list *list = NULL;
	t_list *element;

	nomalloc_printf("Start %s\n", __func__);

	for (int i = 1; i <= 500; i++) {
		element = ft_lstnew(ft_itoa(i));
		ft_lstadd_back(&list, element);
	}

	if (ft_lstsize(list) != 500) nomalloc_printf("%s %s %d\n", __func__, "test 1 fail: wrong rezult ", 500);

	ft_lstclear(&list, free);
	if (list != NULL) nomalloc_printf("%s %s\n", __func__, "test 2 fail: not null ");
}
