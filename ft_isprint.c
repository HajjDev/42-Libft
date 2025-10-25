/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:45:16 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:07:24 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
#include <ctype.h>

void    test_isprint(int c)
{
    int my_res = !!ft_isprint(c);
    int real_res = !!isprint(c);

    printf("Char: '%c' (%d) ", (c >= 32 && c <= 126) ? c : '?', c);
    printf(" |  ft_isprint: %d, isprint: %d  | ", my_res, real_res);
    if (my_res == real_res)
        printf("\033[32m[OK]\033[0m\n");
    else
        printf("\033[31m[KO]\033[0m\n");
}

int main(void)
{
    printf("--- Testing ft_isprint ---\n\n");

    printf("--- Loop from 0 to 127 ---\n");
    for (int i = 0; i <= 127; i++)
        test_isprint(i);
    
    printf("\n--- Edge Cases ---\n");
    test_isprint(-1);
    test_isprint(128);
    test_isprint(255);
    test_isprint(31);
    test_isprint(' ');
    test_isprint(127);

    printf("\n--- End of tests ---\n");
    return (0);
}
*/