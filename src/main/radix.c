/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:51:37 by caunhach          #+#    #+#             */
/*   Updated: 2023/06/08 20:41:35 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	get_max_bit(t_list *lst)
{
	size_t	i;
	size_t	bits;

	bits = 1;
	i = ft_lstsize(lst);
	while (i / 2)
	{
		i /= 2;
		bits++;
	}
	return (bits);
}

void	radix(t_list **a, t_list**b)
{
	size_t	bits;
	size_t	i;
	size_t	j;
	size_t	size;

	j = 0;
	bits = get_max_bit(*a);
	size = ft_lstsize(*a);
	while (j < bits)
	{
		i = 0;
		while (i++ < size)
		{
			if (!(((*a)->index >> j) & 1))
				pb(a, b);
			else
				ra(a);
		}
		while (*b)
			pa(a, b);
		j++;
	}
}
