/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 23:05:35 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 23:05:35 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_lstnew(void)
{
	char *content = "dummy string";
	t_list *list;

    printf("Start %s\n", __func__);

	list = ft_lstnew(content);
	if (list->content != content || list->next != NULL) printf("%s %s\n", __func__, "test 1 fail: wrong rezult");
	free(list);
}
