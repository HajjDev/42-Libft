/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:56:15 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/22 16:15:40 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	length;
	size_t	i;

	if (!s)
		return ;
	i = 0;
	length = ft_strlen(s);
	while (i < length)
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
