/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:53:05 by caunhach          #+#    #+#             */
/*   Updated: 2023/06/09 20:21:18 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	reverse(t_list	**lst)
{
	t_list	*tmp;
	t_list	*head;

	head = *lst;
	while (head->next->next)
	{
		head = head->next;
	}
	tmp = head->next;
	head->next = NULL;
	ft_lstadd_front(lst, tmp);
}

void	rra(t_list **a)
{
	reverse(a);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_list **b)
{
	reverse(b);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_list **a, t_list **b)
{
	reverse(a);
	reverse(b);
	ft_putendl_fd("rrr", 1);
}
