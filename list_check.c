/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:23:37 by lodemetz          #+#    #+#             */
/*   Updated: 2023/12/04 12:30:10 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arguments_ok(char **argv)
{
	char	*start;

	while (*argv++)
	{
		if (!*argv)
			break ;
		start = *argv;
		while (**argv)
		{
			if (!(ft_isdigit(**argv) || **argv == ' ' || **argv == '+' \
															|| **argv == '-'))
				return (0);
			(*argv)++;
		}
		*argv = start;
	}
	return (1);
}

int	duplicate_found(t_list *lst)
{
	t_list	*search;

	while (lst)
	{
		search = lst->next;
		while (search)
		{
			if (lst->content == search->content)
				return (1);
			search = search->next;
		}
		lst = lst->next;
	}
	return (0);
}

int	is_list_ok(t_list *lst)
{
	if (!lst)
		return (0);
	if (find_max(lst) > INT_MAX || find_min(lst) < INT_MIN)
		return (0);
	if (duplicate_found(lst))
		return (0);
	if (ft_lstsize(lst) > 10000)
		return (0);
	return (1);
}

int	is_nbr(char *str)
{
	while (*str)
	{
		if (ft_isdigit(*str++))
			return (1);
	}
	return (0);
}
