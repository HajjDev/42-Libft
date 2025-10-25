/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:01:17 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:08:16 by cel-hajj         ###   ########.fr       */
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

/*
#include <stdio.h>
#include <string.h>
#include <limits.h>

void    test_itoa(int n)
{
    char *my_str = ft_itoa(n);
    char real_str[25];
    
    sprintf(real_str, "%d", n);

    printf("Number: %d\n", n);
    printf("  ft_itoa: \"%s\"\n", my_str);
    printf("  sprintf: \"%s\"\n", real_str);

    if (my_str && strcmp(my_str, real_str) == 0)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    printf("--------------------------------------\n");

    if (my_str)
        free(my_str);
}

int main(void)
{
    printf("--- Testing ft_itoa ---\n\n");

    test_itoa(42);
    test_itoa(-42);
    test_itoa(0);
    test_itoa(123456789);
    test_itoa(-987654321);
    test_itoa(INT_MAX);
    test_itoa(INT_MIN);
    test_itoa(1);
    test_itoa(-1);
    
    printf("--- End of tests ---\n");
    return (0);
}
*/