/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:08:13 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/14 08:18:26 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name
// ft_split

// Prototype
// char **ft_split(char const *s, char c);

// Turn in files
// -

// Parameters
// s: The string to be split.
// c: The delimiter character.

// Return value
// The array of new strings resulting from the split.
// NULL if the allocation fails.

// External functs.
// malloc, free

// Description
// Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter. The array must end
// with a NULL pointer.

#include "libft.h"

unsigned int	count_words(char const *s, char c)
{
	unsigned int	nwords;

	nwords = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			nwords++;
		while (*s && *s != c)
			s++;
	}
	return (nwords);
}

unsigned int	get_length(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	nwords;
	char			**arr;
	unsigned int	i;

	nwords = count_words(s, c);
	arr = malloc((nwords + 1) * sizeof(char *));
	if (!arr)
		return (0);
	i = 0;
	while (i < nwords)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			arr[i] = ft_substr(s, 0, get_length(s, c));
		while (*s && *s != c)
			s++;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
