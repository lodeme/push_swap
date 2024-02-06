/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:25:07 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/10 18:07:24 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name
// ft_putchar_fd

// Prototype
// void ft_putchar_fd(char c, int fd);

// Turn in files
// -

// Parameters
// c: The character to output.
// fd: The file descriptor on which to write.

// Return value
// None

// External functs.
// write

// Description
// Outputs the character ’c’ to the given file descriptor.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
