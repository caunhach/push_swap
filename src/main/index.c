/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:02:21 by caunhach          #+#    #+#             */
/*   Updated: 2023/06/09 19:48:03 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_list	*get_min(t_list **lst)
{
	t_list	*stack;
	t_list	*lst_min;
	int		min;

	if (!(*lst))
		return (NULL);
	min = 0;
	lst_min = NULL;
	stack = *lst;
	while (stack)
	{
		if ((stack->index == -1) && (!min || stack->value < lst_min->value))
		{
			lst_min = stack;
			min = 1;
		}
		stack = stack->next;
	}
	return (lst_min);
}

void	set_index(t_list **lst)
{
	t_list	*stack;
	int		i;

	i = 0;
	stack = get_min(lst);
	while (stack)
	{
		stack->index = i++;
		stack = get_min(lst);
	}
}
