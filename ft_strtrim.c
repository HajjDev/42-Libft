/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:42:58 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/22 18:10:18 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contains(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_getlength(char const *s, char const *set)
{
	size_t	length;
	size_t	start;
	size_t	i;

	length = ft_strlen(s);
	i = 0;
	while (s[i] && ft_contains(set, s[i]))
	{
		length--;
		i++;
	}
	if (length == 0)
		return (0);
	start = i;
	i = ft_strlen(s) - 1;
	while (i > start && s[i] && ft_contains(set, s[i]))
	{
		length--;
		i--;
	}
	return (length);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;
	size_t	i;
	size_t	j;
	char	*trimmed_s;

	if (!s1)
		return (NULL);
	length = ft_getlength(s1, set);
	trimmed_s = (char *)malloc((length + 1) * sizeof(char));
	if (!trimmed_s)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] && ft_contains(set, s1[i]))
		i++;
	while (j < length)
	{
		trimmed_s[j] = s1[i];
		j++;
		i++;
	}
	trimmed_s[j] = '\0';
	return (trimmed_s);
}
