/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:16:37 by caunhach          #+#    #+#             */
/*   Updated: 2023/06/09 20:22:20 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rotate(t_list **src)
{
	t_list	*tmp;

	tmp = *src;
	*src = (*src)->next;
	tmp->next = NULL;
	ft_lstadd_back(src, tmp);
}

void	ra(t_list **a)
{
	rotate(a);
	ft_putendl_fd("ra", 1);
}

void	rb(t_list **b)
{
	rotate(b);
	ft_putendl_fd("rb", 1);
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_putendl_fd("rr", 1);
}
