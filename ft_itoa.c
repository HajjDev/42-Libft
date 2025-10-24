/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:01:17 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/24 10:45:15 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_length(long n)
{
	size_t	length;

	length = 0;
	while (n > 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

static char	*ft_zero(void)
{
	char	*number;

	number = (char *)malloc(2 * sizeof(char));
	if (!number)
		return (NULL);
	number[0] = '0';
	number[1] = '\0';
	return (number);
}

static char	*ft_fill(char *number, long ln, int neg)
{
	size_t	length;

	length = ft_get_length(ln);
	number[length + neg] = '\0';
	while (length > 0)
	{
		number[length + neg - 1] = ln % 10 + '0';
		ln /= 10;
		length--;
	}
	if (neg)
		number[0] = '-';
	return (number);
}

char	*ft_itoa(int n)
{
	char	*number;
	size_t	length;
	long	ln;
	int		neg;

	neg = 0;
	length = 0;
	if (n == 0)
		return (ft_zero());
	else if (n < 0)
	{
		ln = -(long)n;
		neg = 1;
	}
	else
		ln = n;
	length = ft_get_length(ln);
	number = (char *)malloc((length + 1 + neg) * sizeof(char));
	if (!number)
		return (NULL);
	return (ft_fill(number, ln, neg));
}
