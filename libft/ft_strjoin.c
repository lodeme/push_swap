/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:19:53 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/10 18:18:22 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name
// ft_strjoin

// Prototype
// char *ft_strjoin(char const *s1, char const *s2);

// Turn in files
// -
// Parameters
// s1: The prefix string.
// s2: The suffix string.

// Return value
// The new string.
// NULL if the allocation fails.

// External functs.
// malloc

// Description
// Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2’.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	char			*str;
	unsigned int	i;

	len = ft_strlen(s1);
	len += ft_strlen(s2);
	str = malloc(len + 1);
	if (!str)
		return (0);
	i = 0;
	if (s1)
	{
		while (*s1)
			str[i++] = *s1++;
	}
	if (s2)
	{
		while (*s2)
			str[i++] = *s2++;
	}
	str[i] = '\0';
	return (str);
}
