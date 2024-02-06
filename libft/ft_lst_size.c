/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:45:08 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/15 11:39:38 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name 
// ft_lstsize

// Prototype 
// int ft_lstsize(t_list *lst);

// Turn in files 
// -

// Parameters 
// lst: The beginning of the list.

// Return value 
// The length of the list

// External functs. 
// None

// Description 
// Counts the number of nodes in a list.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
