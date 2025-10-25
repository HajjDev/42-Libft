/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:40:43 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:02:19 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
#include <stdio.h>
#include <ctype.h>

void    test_isascii(int c)
{
    int my_res = !!ft_isascii(c);
    int real_res = !!isascii(c);

    printf("Char: '%c' (%d) ", (c >= 32 && c <= 126) ? c : '?', c);
    printf(" |  ft_isascii: %d, isascii: %d  | ", my_res, real_res);
    if (my_res == real_res)
        printf("\033[32m[OK]\033[0m\n");
    else
        printf("\033[31m[KO]\033[0m\n");
}

int main(void)
{
    printf("--- Testing ft_isascii ---\n\n");

    printf("--- Loop from -10 to 140 ---\n");
    for (int i = -10; i <= 140; i++)
        test_isascii(i);
    
    printf("\n--- Edge Cases ---\n");
    test_isascii(255);
    test_isascii(256);
    test_isascii(1024);
    
    printf("\n--- End of tests ---\n");
    return (0);
}
*/