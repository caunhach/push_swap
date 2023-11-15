/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:21:27 by caunhach          #+#    #+#             */
/*   Updated: 2023/06/09 20:03:23 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort3(t_list **a, int min)
{
	if (ft_issorted(*a))
		return ;
	if ((*a)->index == min)
	{
		sa(a);
		ra(a);
	}
	else if ((*a)->index == min + 1)
	{
		if ((*a)->next->index == min)
			sa(a);
		else if ((*a)->next->index == min + 2)
			rra(a);
	}
	else if ((*a)->index == min + 2)
	{
		ra(a);
		if ((*a)->index == min + 1)
			sa(a);
	}
}

void	sort4(t_list **a, t_list **b)
{
	int	size;

	size = ft_lstsize(*a);
	while (size--)
	{
		if ((*a)->index == 0)
		{
			pb(a, b);
			break ;
		}
		else
			ra(a);
	}
	sort3(a, 1);
	pa(a, b);
}

void	sort5(t_list **a, t_list **b)
{
	int	size;
	int	i;

	i = 2;
	size = ft_lstsize(*a);
	while (size--)
	{
		if ((*a)->index == 0 || (*a)->index == 1)
		{
			pb(a, b);
			i--;
		}
		else
			ra(a);
		if (!i)
			break ;
	}
	sort3(a, 2);
	if ((*b)->index < (*b)->next->index)
		sb(b);
	pa(a, b);
	pa(a, b);
}

void	simple(t_list **a, t_list **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (size == 2)
		sa(a);
	else if (size == 3)
		sort3(a, 0);
	else if (size == 4)
		sort4(a, b);
	else if (size == 5)
		sort5(a, b);
}
