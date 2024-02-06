/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:36:09 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/10 18:07:37 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name 
// ft_putstr_fd

// Prototype 
// void ft_putstr_fd(char *s, int fd);

// Turn in files 
// -

// Parameters 
// s: The string to output.
// fd: The file descriptor on which to write.

// Return value 
// None

// External functs. 
// write

// Description 
// Outputs the string ’s’ to the given file descriptor.

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
}
