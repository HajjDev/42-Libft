/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:51:49 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/24 15:50:42 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(char const *s, char c, int str)
{
	size_t	length;
	size_t	i;

	length = 0;
	i = 0;
	if (!str && s)
	{
		while (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			if (s[i])
			{
				length++;
				while (s[i] && s[i] != c)
					i++;
			}
		}
	}
	else
		if (s)
			while (s[length] && s[length] != c)
				length++;
	return (length);
}

static void	ft_skip(char const *s, char c, size_t *i)
{
	while (s[*i] && s[*i] == c)
		(*i)++;
}

static char	*ft_add(const char *s, size_t length)
{
	size_t	i;
	char	*word;

	word = (char *)malloc((length + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_free(char **tab, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	str_length;
	size_t	i;
	size_t	j;
	char	**tab;

	tab = (char **)malloc((ft_size(s, c, 0) + 1) * sizeof(char *));
	if (!tab || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		ft_skip(s, c, &i);
		str_length = ft_size(&s[i], c, 1);
		if (str_length)
		{
			tab[j] = ft_add(&s[i], str_length);
			if (!tab[j])
				return (ft_free(tab, j));
			j++;
		}
		i += str_length;
	}
	tab[j] = NULL;
	return (tab);
}
