/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:31:36 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/13 14:16:43 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name
// ft_strmapi

// Prototype
// char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

// Turn in files
// -

// Parameters
// s: The string on which to iterate.
// f: The function to apply to each character.

// Return value
// The string created from the successive applications of ’f’.
// Returns NULL if the allocation fails.

// External functs.
// malloc

// Description
// Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (ft_calloc(1, 1));
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
