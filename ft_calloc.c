/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:57:03 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/24 14:36:57 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*t;
	size_t	total;

	if (size != 0 && count > (size_t)(-1) / size)
		return (NULL);
	total = count * size;
	t = malloc(total);
	if (!t)
		return (NULL);
	ft_bzero(t, total);
	return (t);
}
