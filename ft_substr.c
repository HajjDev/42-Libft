/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:07:24 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/22 16:13:52 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*substring;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i])
	{
		substring[j] = s[i];
		j++;
		i++;
	}
	substring[j] = '\0';
	return (substring);
}
