/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:51:57 by louis.demet       #+#    #+#             */
/*   Updated: 2023/12/04 12:15:43 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *s)
{
	ft_putstr_fd(s, 1);
}

int	is_sorted(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			break ;
		if (lst->content > lst->next->content)
			return (0);
		lst = lst->next;
	}
	return (1);
}

t_list	*ft_lstbeforelast(t_list *lst)
{
	t_list	*last;

	last = lst;
	while (lst->next)
	{
		last = lst;
		lst = lst->next;
	}
	return (last);
}

void	return_null(long long **lnbr)
{
	*lnbr = 0;
	return ;
}

void	ft_atoi_ptr(char **nptr, long long **lnbr)
{
	long long	sign;

	sign = 1;
	**lnbr = 0;
	while (**nptr == 32 || (**nptr >= 9 && **nptr <= 13))
		(*nptr)++;
	if (**nptr == '+' || **nptr == '-')
	{
		if (**nptr == '-')
			sign = -1;
		(*nptr)++;
	}
	if (!(**nptr >= '0' && **nptr <= '9'))
		return (return_null(lnbr));
	while (**nptr >= '0' && **nptr <= '9')
	{
		**lnbr = **lnbr * 10 + *(*nptr)++ - '0';
		if (**lnbr * sign > 2147483647 || **lnbr * sign < -2147483648)
			return (return_null(lnbr));
	}
	**lnbr = **lnbr * sign;
}
