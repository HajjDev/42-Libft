/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:29:54 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:01:32 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
#include <stdio.h>
#include <ctype.h>

void    test_isalpha(int c)
{
    int my_res = !!ft_isalpha(c);
    int real_res = !!isalpha(c);

    printf("Char: '%c' (%d) ", (c >= 32 && c <= 126) ? c : '?', c);
    printf(" |  ft_isalpha: %d, isalpha: %d  | ", my_res, real_res);
    if (my_res == real_res)
        printf("\033[32m[OK]\033[0m\n");
    else
        printf("\033[31m[KO]\033[0m\n");
}

int main(void)
{
    printf("--- Testing ft_isalpha ---\n\n");

    printf("--- Loop from 0 to 127 ---\n");
    for (int i = 0; i <= 127; i++)
        test_isalpha(i);
    
    printf("\n--- Edge Cases ---\n");
    test_isalpha(-1);
    test_isalpha(128);
    test_isalpha(255);
    test_isalpha(' ');
    test_isalpha('9');
    test_isalpha('@');
    test_isalpha('[');
    test_isalpha('`');
    test_isalpha('{');

    printf("\n--- End of tests ---\n");
    return (0);
}
*/