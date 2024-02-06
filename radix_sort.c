/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:02:18 by louis.demet       #+#    #+#             */
/*   Updated: 2023/12/04 12:20:01 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_nradix_elements(t_list *a, int shift)
{
	int	n;

	n = 0;
	while (a)
	{
		if (((a->content >> shift) & 1) == 0)
			n++;
		a = a->next;
	}
	return (n);
}

void	push_zeroes_to_b(t_list **a, t_list **b, t_list **instrs, int shift)
{
	int	size;

	size = ft_lstsize(*a);
	while (size--)
	{
		if ((((*a)->content >> shift) & 1) == 0)
			pb(a, b, instrs);
		else
			ra(a, b, instrs);
	}
}

void	push_all_to_a(t_list **a, t_list**b, t_list **instrs)
{
	while (*b)
		pa(a, b, instrs);
}

int	get_max_bits(t_list *a)
{
	int	max;
	int	bits;

	max = find_max(a);
	bits = 0;
	while (max)
	{
		max /= 2;
		bits++;
	}
	return (bits);
}

t_list	*radix_sort(t_list **a)
{
	t_list	*instrs;
	t_list	*b;
	int		shift;
	int		max_bits;

	if (!*a)
		return (0);
	b = 0;
	instrs = 0;
	shift = 0;
	max_bits = get_max_bits(*a);
	while (max_bits-- && !is_sorted(*a))
	{
		push_zeroes_to_b(a, &b, &instrs, shift++);
		push_all_to_a(a, &b, &instrs);
	}
	return (instrs);
}
