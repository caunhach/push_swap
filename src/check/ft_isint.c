/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:04:48 by caunhach          #+#    #+#             */
/*   Updated: 2023/06/09 19:05:56 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	ft_isint(char *s)
{
	if (ft_atol(s) > INT_MAX || ft_atol(s) < INT_MIN)
		return (0);
	return (1);
}
