/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:38:33 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/10 18:07:28 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name 
// ft_putendl_fd

// Prototype 
// void ft_putendl_fd(char *s, int fd);

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
// Outputs the string ’s’ to the given file descriptor followed by a newline.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
