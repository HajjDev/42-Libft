/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:36:21 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:00:29 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
#include <stdio.h>
#include <ctype.h>

void    test_isalnum(int c)
{
    int my_res = !!ft_isalnum(c);
    int real_res = !!isalnum(c);

    printf("Char: '%c' (%d) ", (c >= 32 && c <= 126) ? c : '?', c);
    printf(" |  ft_isalnum: %d, isalnum: %d  | ", my_res, real_res);
    if (my_res == real_res)
        printf("\033[32m[OK]\033[0m\n");
    else
        printf("\033[31m[KO]\033[0m\n");
}

int main(void)
{
    printf("--- Testing ft_isalnum ---\n\n");

    printf("--- Loop from 0 to 127 ---\n");
    for (int i = 0; i <= 127; i++)
        test_isalnum(i);
    
    printf("\n--- Edge Cases ---\n");
    test_isalnum(-1);
    test_isalnum(128);
    test_isalnum(255);
    test_isalnum('@');
    test_isalnum('[');
    test_isalnum('`');
    test_isalnum('{');
    test_isalnum(' ');

    printf("\n--- End of tests ---\n");
    return (0);
}
*/