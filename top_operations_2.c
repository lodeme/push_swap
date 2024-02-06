/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_operations_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:14:44 by lodemetz          #+#    #+#             */
/*   Updated: 2023/12/04 12:43:04 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_list **a, t_list **b, t_list **instrs)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_lstadd_back(instrs, ft_lstnew(11));
}

void	print_single_instruction(int content)
{
	if (content == 1)
		ft_putstr("sa\n");
	if (content == 2)
		ft_putstr("sb\n");
	if (content == 3)
		ft_putstr("ss\n");
	if (content == 4)
		ft_putstr("pa\n");
	if (content == 5)
		ft_putstr("pb\n");
	if (content == 6)
		ft_putstr("ra\n");
	if (content == 7)
		ft_putstr("rb\n");
	if (content == 8)
		ft_putstr("rr\n");
	if (content == 9)
		ft_putstr("rra\n");
	if (content == 10)
		ft_putstr("rrb\n");
	if (content == 11)
		ft_putstr("rrr\n");
}
