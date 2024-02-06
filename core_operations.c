/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:01:50 by louis.demet       #+#    #+#             */
/*   Updated: 2023/12/04 12:26:28 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **lst)
{
	t_list	*a;
	t_list	*b;

	if (!lst || !(*lst)->next)
		return ;
	a = *lst;
	b = (*lst)->next;
	a->next = b->next;
	b->next = a;
	*lst = b;
}

void	push(t_list **a, t_list **b)
{
	t_list	*temp;

	temp = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = temp;
}

void	rotate(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	*lst = (*lst)->next;
	temp->next = 0;
	ft_lstadd_back(lst, temp);
}

void	reverse_rotate(t_list **lst)
{
	t_list	*temp;

	temp = ft_lstbeforelast(*lst);
	ft_lstadd_front(lst, temp->next);
	temp->next = 0;
}
