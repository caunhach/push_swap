/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:14:30 by caunhach          #+#    #+#             */
/*   Updated: 2023/06/09 20:18:26 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	push(t_list **dst, t_list **src)
{
	t_list	*tmp;

	tmp = (*src)->next;
	ft_lstadd_front(dst, *src);
	*src = tmp;
}

void	pa(t_list **a, t_list **b)
{
	push(a, b);
	ft_putendl_fd("pa", 1);
}

void	pb(t_list **a, t_list **b)
{
	push(b, a);
	ft_putendl_fd("pb", 1);
}
