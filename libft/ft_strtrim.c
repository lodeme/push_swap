/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:47:39 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/14 08:48:56 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name 
// ft_strtrim

// Prototype 
// char *ft_strtrim(char const *s1, char const *set);

// Turn in files 
// -

// Parameters 
// s1: The string to be trimmed.
// set: The reference set of characters to trim.

// Return value 
// The trimmed string.
// NULL if the allocation fails.

// External functs. 
// malloc

// Description 
// Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.

#include "libft.h"

int	isset(char c, char const *set)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		istart;
	int		iend;
	char	*strtrim;

	if (!s1)
		return (0);
	istart = 0;
	while (s1[istart] && isset(s1[istart], set))
		istart++;
	if (!s1[istart])
		return (ft_calloc(1, 1));
	iend = ft_strlen(s1) - 1;
	while (s1[iend] && isset(s1[iend], set))
		iend--;
	strtrim = ft_substr(s1, istart, iend - istart + 1);
	if (!strtrim)
		return (0);
	return (strtrim);
}
