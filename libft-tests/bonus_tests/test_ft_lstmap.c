/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 23:05:36 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 23:05:36 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

static void *map_func1(void *ptr)
{
	(void)ptr;
	return "test";
}

static void *map_func2(void *ptr)
{
	int i = atoi(ptr);
	return ft_itoa(-i);
}

void test_ft_lstmap(void)
{
	t_list *list = NULL;
	t_list *mapped_list;
	t_list *element;

	nomalloc_printf("Start %s\n", __func__);

	for (int i = 0; i <= 999; i++) {
		element = ft_lstnew(ft_itoa(i));
		ft_lstadd_back(&list, element);
	}

	mapped_list = ft_lstmap(list, map_func1, NULL);
	element = list;
	for (int i = 0; i <= 999; i++) {
		if (i != ft_atoi(element->content)) nomalloc_printf("%s %s %s!=%d\n", __func__, "test 1 fail: wrong rezult ", element->content, i);
		element = element->next;
	}

	element = mapped_list;
	for (int i = 0; i <= 999; i++) {
		if (strcmp(element->content, "test") != 0) nomalloc_printf("%s %s %s!=%s\n", __func__, "test 1 fail: wrong rezult ", element->content, "test");
		element = element->next;
	}
	ft_lstclear(&mapped_list, NULL);
	if (mapped_list != NULL) nomalloc_printf("%s %s\n", __func__, "test 1 fail: not null ");

	mapped_list = ft_lstmap(list, map_func2, free);
	element = mapped_list;
	for (int i = 0; i <= 999; i++) {
		if (-i != ft_atoi(element->content)) nomalloc_printf("%s %s %s!=%d\n", __func__, "test 2 fail: wrong rezult ", element->content, -i);
		element = element->next;
	}

	ft_lstclear(&mapped_list, free);
	if (mapped_list != NULL) nomalloc_printf("%s %s\n", __func__, "test 3 fail: not null ");
}
