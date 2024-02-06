/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_builder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:29:27 by lodemetz          #+#    #+#             */
/*   Updated: 2023/12/04 12:29:53 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_incremental_values(t_list *lst)
{
	t_list	*min;
	t_list	*search;
	int		size;
	int		i;

	i = 0;
	size = ft_lstsize(lst);
	while (i < size)
	{
		min = find_max_ptr(lst);
		search = lst;
		while (search)
		{
			if (search->content < min->content && search->content >= i)
				min = search;
			search = search->next;
		}
		min->content = i;
		i++;
	}
}

void	remove_negatives(t_list *lst)
{
	t_list	*max;
	t_list	*search;
	int		size;
	int		i;

	i = 0;
	size = ft_lstsize(lst);
	while (i < size)
	{
		max = find_min_ptr(lst);
		search = lst;
		while (search)
		{
			if (search->content > max->content && \
											search->content <= 2147483647 - i)
				max = search;
			search = search->next;
		}
		max->content = 2147483647 - i;
		i++;
	}
}

void	parse_one_number(char **str, t_list **a)
{
	long long	*pnbr;
	long long	lnbr;

	pnbr = &lnbr;
	ft_atoi_ptr(str, &pnbr);
	if (!pnbr)
	{
		ft_lstclear(a);
		return ;
	}
	ft_lstadd_back(a, ft_lstnew((int)lnbr));
}
