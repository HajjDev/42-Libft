/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:58:24 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/22 16:59:44 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	if (!dst || !src)
		return (0);
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	i = 0;
	while (dstlen + i < dstsize - 1 && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
