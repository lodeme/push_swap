/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:06:17 by louis.demet       #+#    #+#             */
/*   Updated: 2023/11/15 11:39:48 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name 
// ft_lstadd_front

// Prototype 
// void ft_lstadd_front(t_list **lst, t_list *new);

// Turn in files 
// -

// Parameters 
// lst: The address of a pointer to the first link of a list.
// new: The address of a pointer to the node to be added to the list.

// Return value 
// None

// External functs. 
// None

// Description 
// Adds the node ’new’ at the beginning of the list.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
