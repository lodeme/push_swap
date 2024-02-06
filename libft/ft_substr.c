/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:27:06 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/13 14:07:05 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name
// ft_substr

// Prototype
// char *ft_substr(char const *s, unsigned int start, size_t len);

// Turn in files
// -

// Parameters
// s: The string from which to create the substring.
// start: The start index of the substring in the
// string ’s’.
// len: The maximum length of the substring.

// Return value
// The substring.
// NULL if the allocation fails.

// External functs.
// malloc

// Description
// Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.

#include "libft.h"

unsigned int	calc_alloc(char const *s, unsigned int start, size_t len)
{
	size_t	slen;

	slen = ft_strlen(s);
	if (slen <= start)
		return (0);
	else if (slen - start >= len)
		return (len);
	else
		return (slen - start);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	sublen ;
	char			*sub;
	unsigned int	i;

	sublen = calc_alloc(s, start, len);
	if (sublen <= 0)
		return (ft_calloc(1, 1));
	sub = malloc(sublen + 1);
	if (!sub)
		return (0);
	i = 0;
	while (i < sublen)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
// int main ()
// {
// 	char *subst = ft_substr("hola", 2, 30);
// 	return (0);
// }