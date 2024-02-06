/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:41:17 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/12 12:50:25 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name 
// ft_putnbr_fd

// Prototype 
// void ft_putnbr_fd(int n, int fd);

// Turn in files 
// -

// Parameters 
// n: The integer to output.
// fd: The file descriptor on which to write.

// Return value 
// None

// External functs. 
// write

// Description 
// Outputs the integer ’n’ to the given file descriptor.

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
