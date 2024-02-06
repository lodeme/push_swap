/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:14:44 by lodemetz          #+#    #+#             */
/*   Updated: 2023/12/04 12:19:35 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a, t_list **b, t_list **instrs)
{
	(void)b;
	swap(a);
	ft_lstadd_back(instrs, ft_lstnew(1));
}

void	sb(t_list **a, t_list **b, t_list **instrs)
{
	(void)a;
	swap(b);
	ft_lstadd_back(instrs, ft_lstnew(2));
}

void	ss(t_list **a, t_list **b, t_list **instrs)
{
	swap(a);
	swap(b);
	ft_lstadd_back(instrs, ft_lstnew(3));
}

void	pa(t_list **a, t_list **b, t_list **instrs)
{
	push(b, a);
	ft_lstadd_back(instrs, ft_lstnew(4));
}

void	pb(t_list **a, t_list **b, t_list **instrs)
{
	push(a, b);
	ft_lstadd_back(instrs, ft_lstnew(5));
}
