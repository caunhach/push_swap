/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:04:18 by caunhach          #+#    #+#             */
/*   Updated: 2023/06/09 20:13:40 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/inc/libft.h"
# include <limits.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;

int		ft_isdouble(t_list **lst);
int		ft_isint(char *s);
int		ft_isnum(char *s);
int		ft_issorted(t_list *lst);
int		ft_isni(char *s);

void	push(t_list **dst, t_list **src);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	reverse(t_list **lst);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	rotate(t_list **src);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	swap(t_list **a);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);

void	free_split(char **split);
void	free_stack(t_list	**lst);
t_list	*ft_lst_new(int value);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
void	ft_print_list(t_list *lst);

t_list	*get_min(t_list **lst);
void	set_index(t_list **lst);
int		ft_add_new(t_list **a, char *s);
int		init(int argc, char **argv, t_list **a);
int		get_max_bit(t_list *lst);
void	radix(t_list **a, t_list**b);
void	sort3(t_list **a, int min);
void	sort4(t_list **a, t_list **b);
void	sort5(t_list **a, t_list **b);
void	simple(t_list **a, t_list **b);

#endif
