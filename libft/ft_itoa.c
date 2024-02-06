/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:00:36 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/14 09:07:05 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name
// ft_itoa

// Prototype
// char *ft_itoa(int n);

// Turn in file
// -

// Parameters
// n: the integer to convert.

// Return value
// The string representing the integer.
// NULL if the allocation fails.

// External functs.
// malloc

// Description
// Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.

#include "libft.h"

int	get_number_length(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		nlen;
	char	*arr;
	long	nbr;

	nbr = n;
	nlen = get_number_length(nbr);
	arr = malloc(nlen + 1);
	if (!arr)
		return (0);
	arr[nlen--] = '\0';
	if (nbr < 0)
	{
		nbr = -nbr;
		arr[0] = '-';
	}
	while (nbr >= 10)
	{
		arr[nlen--] = nbr % 10 + '0';
		nbr /= 10;
	}
	arr[nlen--] = nbr % 10 + '0';
	return (arr);
}
