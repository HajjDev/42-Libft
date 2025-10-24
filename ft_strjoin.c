/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:49:46 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/24 10:47:36 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_concat(char const *s1, char const *s2, char *concat)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[j])
	{
		concat[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*js;

	if (!s1)
		return ((char *)s2);
	else if (!s2)
		return ((char *)s1);
	js = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!js)
		return (NULL);
	return (ft_concat(s1, s2, js));
}
