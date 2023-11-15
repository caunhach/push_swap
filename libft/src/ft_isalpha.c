/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:37:20 by caunhach          #+#    #+#             */
/*   Updated: 2023/02/06 14:36:56 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_isalpha(int arg)
{
	return ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'));
}
