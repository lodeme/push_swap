/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:41:10 by louis.demet       #+#    #+#             */
/*   Updated: 2023/11/27 16:18:14 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name
// ft_lstiter

// Prototype 
// void ft_lstiter(t_list *lst, void (*f)(void *));

// Turn in files 
// -

// Parameters 
// lst: The address of a pointer to a node.
// f: The address of the function used to iterate on
// the list.

// Return value 
// None

// External functs. 
// None

// Description 
// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(int))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst-> next;
	}
}
