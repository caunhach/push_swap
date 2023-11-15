/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:11:20 by caunhach          #+#    #+#             */
/*   Updated: 2023/06/09 20:24:52 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	swap(t_list **a)
{
	int	tmp;
	int	tmpi;

	tmp = (*a)->value;
	tmpi = (*a)->index;
	(*a)->value = (*a)->next->value;
	(*a)->index = (*a)->next->index;
	(*a)->next->value = tmp;
	(*a)->next->index = tmpi;
}

void	sa(t_list **a)
{
	swap(a);
	ft_putendl_fd("sa", 1);
}

void	sb(t_list **b)
{
	swap(b);
	ft_putendl_fd("sb", 1);
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	ft_putendl_fd("ss", 1);
}
