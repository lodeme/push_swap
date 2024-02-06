/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:23:58 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/26 16:05:59 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name 
// ft_lstnew

// Prototype 
// t_list *ft_lstnew(void *content);

// Turn in files 
// -

// Parameters content: 
// The content to create the node with.

// Return value 
// The new node

// External functs. 
// malloc

// Description 
// Allocates (with malloc(3)) and returns a new node.
// The member variable ’content’ is initialized with
// the value of the parameter ’content’. The variable
// ’next’ is initialized to NULL.

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*newlst;

	newlst = (t_list *)malloc(sizeof(t_list));
	if (!newlst)
		return (0);
	newlst->content = content;
	newlst->next = 0;
	return (newlst);
}
