/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:34:41 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:06:50 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <stdio.h>
#include <ctype.h>

void    test_isdigit(int c)
{
    int my_res = !!ft_isdigit(c);
    int real_res = !!isdigit(c);

    printf("Char: '%c' (%d) ", (c >= 32 && c <= 126) ? c : '?', c);
    printf(" |  ft_isdigit: %d, isdigit: %d  | ", my_res, real_res);
    if (my_res == real_res)
        printf("\033[32m[OK]\033[0m\n");
    else
        printf("\033[31m[KO]\033[0m\n");
}

int main(void)
{
    printf("--- Testing ft_isdigit ---\n\n");

    printf("--- Loop from 0 to 127 ---\n");
    for (int i = 0; i <= 127; i++)
        test_isdigit(i);
    
    printf("\n--- Edge Cases ---\n");
    test_isdigit(-1);
    test_isdigit(128);
    test_isdigit(255);
    test_isdigit(' ');
    test_isdigit('a');
    test_isdigit('Z');
    test_isdigit('/');
    test_isdigit(':');

    printf("\n--- End of tests ---\n");
    return (0);
}
*/