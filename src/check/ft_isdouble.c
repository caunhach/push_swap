/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdouble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:43:35 by caunhach          #+#    #+#             */
/*   Updated: 2023/06/09 18:06:58 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	ft_isdouble(t_list **lst)
{
	t_list	*head;
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		head = tmp->next;
		while (head)
		{
			if (tmp->value == head->value)
				return (0);
			head = head->next;
		}
		tmp = tmp->next;
	}
	return (1);
}
