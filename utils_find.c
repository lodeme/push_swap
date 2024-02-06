/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_find.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:03:15 by lodemetz          #+#    #+#             */
/*   Updated: 2023/12/04 12:17:52 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_list *lst)
{
	int	min;

	min = lst->content;
	while (lst)
	{
		if (lst->content < min)
			min = lst->content;
		lst = lst->next;
	}
	return (min);
}

int	find_max(t_list *lst)
{
	int	max;

	max = lst->content;
	while (lst)
	{
		if (lst->content > max)
			max = lst->content;
		lst = lst->next;
	}
	return (max);
}

t_list	*find_max_ptr(t_list *lst)
{
	t_list	*max;

	max = lst;
	while (lst)
	{
		if (lst->content > max->content)
			max = lst;
		lst = lst->next;
	}
	return (max);
}

t_list	*find_min_ptr(t_list *lst)
{
	t_list	*min;

	min = lst;
	while (lst)
	{
		if (lst->content < min->content)
			min = lst;
		lst = lst->next;
	}
	return (min);
}

int	find_pos(t_list *lst, int needle)
{
	int	pos;

	pos = 0;
	while (lst)
	{
		if (lst->content == needle)
			return (pos);
		lst = lst->next;
		pos++;
	}
	return (0);
}
