/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:35:10 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 11:52:16 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	long long		number;
	int				sign;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (number > (9223372036854775807 - (str[i] - '0')) / 10)
			return ((sign == 1) * -1);
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(number * sign));
}
/*
#include <stdio.h>

void    test_atoi(const char *str)
{
    int their_result = ft_atoi(str);
    int real_result = atoi(str);

    printf("String: \"%s\"\n", str);
    printf("  ft_atoi: %d\n", their_result);
    printf("     atoi: %d\n", real_result);
    if (their_result == real_result)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    printf("--------------------------------------\n");
}

int main(void)
{
    printf("--- Testing ft_atoi ---\n\n");

    test_atoi("123");
    test_atoi("-456");
    test_atoi("+789");
    test_atoi("0");
    test_atoi("-0");
    test_atoi("   42");
    test_atoi("\t\n\v\f\r 42");
    test_atoi("   -42");
    test_atoi("   +42");
    test_atoi("42abc123");
    test_atoi("-42abc123");
    test_atoi("abc42");
    test_atoi("  \t\n  42 55");
    test_atoi("+-42");
    test_atoi("-+42");
    test_atoi("--42");
    test_atoi("++42");
    test_atoi("+");
    test_atoi("-");
    test_atoi("");
    test_atoi("2147483647");
    test_atoi("-2147483648");
    test_atoi("2147483648");
    test_atoi("-2147483649");
    test_atoi("9999999999999999999");
    test_atoi("-9999999999999999999");

    printf("--- End of tests ---\n");
    return (0);
}
*/