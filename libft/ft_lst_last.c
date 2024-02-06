/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:49:40 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/15 11:40:27 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name 
// ft_lstlast

// Prototype 
// t_list *ft_lstlast(t_list *lst);

// Turn in files 
// -

// Parameters 
// lst: The beginning of the list.

// Return value 
// Last node of the list

// External functs. 
// None

// Description 
// Returns the last node of the list.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	while (lst)
	{
		last = lst;
		lst = lst->next;
	}
	return (last);
}
