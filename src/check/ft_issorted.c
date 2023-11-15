/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:48:53 by caunhach          #+#    #+#             */
/*   Updated: 2023/06/09 20:16:34 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	ft_issorted(t_list *lst)
{
	while (lst->next)
	{
		if (lst->next->index != lst->index + 1)
			return (0);
		lst = lst->next;
	}
	return (1);
}
