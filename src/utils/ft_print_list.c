/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:09:04 by caunhach          #+#    #+#             */
/*   Updated: 2023/06/09 20:28:52 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_print_list(t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		ft_putnbr_fd(lst->value, 1);
		ft_putstr_fd(" ", 1);
		ft_putnbr_fd(lst->index, 1);
		ft_putendl_fd("", 1);
		lst = lst->next;
	}
}
