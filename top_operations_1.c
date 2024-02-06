/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_operations_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:14:44 by lodemetz          #+#    #+#             */
/*   Updated: 2023/12/04 12:19:15 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a, t_list **b, t_list **instrs)
{
	(void)b;
	rotate(a);
	ft_lstadd_back(instrs, ft_lstnew(6));
}

void	rb(t_list **a, t_list **b, t_list **instrs)
{
	(void)a;
	rotate(b);
	ft_lstadd_back(instrs, ft_lstnew(7));
}

void	rr(t_list **a, t_list **b, t_list **instrs)
{
	rotate(a);
	rotate(b);
	ft_lstadd_back(instrs, ft_lstnew(8));
}

void	rra(t_list **a, t_list **b, t_list **instrs)
{
	(void)b;
	reverse_rotate(a);
	ft_lstadd_back(instrs, ft_lstnew(9));
}

void	rrb(t_list **a, t_list **b, t_list **instrs)
{
	(void)a;
	reverse_rotate(b);
	ft_lstadd_back(instrs, ft_lstnew(10));
}
