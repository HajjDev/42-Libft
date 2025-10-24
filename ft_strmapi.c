/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:45:10 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/22 16:16:15 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*modif;
	unsigned int	i;
	size_t			length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	modif = (char *)malloc((length + 1) * sizeof(char));
	if (!modif)
		return (NULL);
	i = 0;
	while (i < length)
	{
		modif[i] = (*f)(i, s[i]);
		i++;
	}
	modif[i] = '\0';
	return (modif);
}
