/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodemetz <lodemetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:59:55 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/27 16:01:47 by lodemetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name 
// ft_lstdelone

// Prototype 
// void ft_lstdelone(t_list *lst, void (*del)(void*));

// Turn in files
// -
// Parameters 
// lst: The node to free.
// del: The address of the function used to delete
// the content.

// Return value 
// None

// External functs. 
// free

// Description 
// Takes as a parameter a node and frees the memory of
// the node’s content using the function ’del’ given
// as a parameter and free the node. The memory of
// ’next’ must not be freed.

#include "libft.h"

void	ft_lstdelone(t_list *lst)
{
	if (!lst)
		return ;
	free(lst);
}
