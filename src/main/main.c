/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:12:00 by caunhach          #+#    #+#             */
/*   Updated: 2023/07/18 22:45:56 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	ft_add_new(t_list **a, char *s)
{
	t_list	*new;

	new = ft_lst_new(ft_atoi(s));
	if (!new)
		return (0);
	ft_lstadd_back(a, new);
	return (1);
}

int	init(int argc, char **argv, t_list **a)
{
	int		i;
	int		j;
	int		check;
	char	**s;

	i = 0;
	check = 1;
	while (++i < argc)
	{
		j = 0;
		s = ft_split(argv[i], ' ');
		if (!s[j])
			check = 0;
		while (s[j])
		{
			if (!ft_isni(s[j]))
				check = 0;
			if (!ft_add_new(a, s[j++]))
				check = 0;
		}
		if (check && !ft_isdouble(a))
			check = 0;
		free_split(s);
	}
	return (check);
}

int	main(int argc, char **argv)
{
	static t_list	*a;
	static t_list	*b;
	int				check;

	if (argc < 2)
		return (1);
	check = init(argc, argv, &a);
	if (check == 0)
	{
		free_stack(&a);
		ft_error("Error\n");
	}
	set_index(&a);
	if (!ft_issorted(a))
	{
		if (ft_lstsize(a) > 5)
			radix(&a, &b);
		else
			simple(&a, &b);
	}
	free_stack(&a);
	free_stack(&b);
}
