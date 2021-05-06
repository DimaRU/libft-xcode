/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 23:05:33 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 23:05:33 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft-tests.h"

void test_ft_lstdelone(void)
{
	t_list *element;
    nomalloc_printf("Start %s\n", __func__);

	element = malloc(sizeof(t_list));
	element->content = "test";
	element->next = element;
	ft_lstdelone(element, NULL);

	for (int i = 0; i < 1000; i++) {
		element = malloc(sizeof(t_list));
		element->content = ft_itoa(i);
		element->next = NULL;
		ft_lstdelone(element, free);
	}
}
