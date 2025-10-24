/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:43:03 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/22 14:17:28 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && i < len && needle[j] != '\0')
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)&haystack[i - j]);
			i -= j;
			j = 0;
		}
		i++;
	}
	return (NULL);
}
