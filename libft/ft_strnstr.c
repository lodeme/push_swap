/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis.demetz <louis.demetz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:37:28 by lodemetz          #+#    #+#             */
/*   Updated: 2023/11/13 17:43:18 by louis.demet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*big_start;
	char	*little_start;
	size_t	ref_len;

	if (!*little)
		return ((char *)big);
	while (*big && len)
	{
		big_start = (char *)big;
		little_start = (char *)little;
		ref_len = len;
		while (*big && *little && *big == *little && ref_len)
		{
			big++;
			little++;
			ref_len--;
		}
		if (!*little)
			return (big_start);
		big = ++big_start;
		little = little_start;
		len--;
	}
	return (0);
}

// int	main()
// {
// 	char haystack[30] = "aaabcabcd";
// 	char *result = ft_strnstr(haystack, "abcd", 9);
// 	return (0);
// }