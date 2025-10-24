/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:11:55 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/22 14:17:54 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*t1;
	char	*t2;

	t1 = (char *)s1;
	t2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (t1[i] != t2[i])
			return ((unsigned char)t1[i] - (unsigned char)t2[i]);
		i++;
	}
	return (0);
}
