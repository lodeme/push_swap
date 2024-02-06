/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:02:18 by louis.demet       #+#    #+#             */
/*   Updated: 2023/12/04 12:26:35 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **a, t_list **b, t_list **instrs)
{
	if ((*a)->content > (*a)->next->content)
		sa(a, b, instrs);
}

void	sort_three(t_list **a, t_list **b, t_list **instrs)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->content;
	second = (*a)->next->content;
	third = (*a)->next->next->content;
	if (first > second && second < third && first > third)
		ra(a, b, instrs);
	else if (first > second && second < third && first < third)
		sa(a, b, instrs);
	else if (first < second && second > third && first > third)
		rra(a, b, instrs);
	else if (first > second && second > third && first > third)
	{
		sa(a, b, instrs);
		rra(a, b, instrs);
	}
	else
	{
		rra(a, b, instrs);
		sa(a, b, instrs);
	}
}

void	push_min_to_b(t_list **a, t_list **b, t_list **instrs)
{
	int	min;
	int	len;
	int	pos;

	len = ft_lstsize(*a);
	while (1)
	{
		min = find_min(*a);
		pos = find_pos(*a, min);
		len = ft_lstsize(*a);
		if ((*a)->content == min)
		{
			pb(a, b, instrs);
			return ;
		}
		else if (pos <= (len / 2))
			ra(a, b, instrs);
		else
			rra(a, b, instrs);
	}
}

void	push_back_to_a(t_list **a, t_list **b, t_list **instrs)
{
	while (*b)
		pa(a, b, instrs);
}

t_list	*insertion_sort(t_list **a)
{
	t_list	*instrs;
	t_list	*b;

	if (!*a)
		return (0);
	b = 0;
	instrs = 0;
	while (*a && !is_sorted(*a) && ft_lstsize(*a) > 3)
		push_min_to_b(a, &b, &instrs);
	if (!is_sorted(*a) && ft_lstsize(*a) == 2)
		sort_two(a, &b, &instrs);
	if (!is_sorted(*a) && ft_lstsize(*a) == 3)
		sort_three(a, &b, &instrs);
	while (b)
		push_back_to_a(a, &b, &instrs);
	return (instrs);
}
