/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:23:03 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:24:18 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

void    test_tolower(int c)
{
    int my_res = ft_tolower(c);
    int real_res = tolower(c);

    printf("Char: '%c' (%d) ", (c >= 32 && c <= 126) ? c : '?', c);
    printf(" |  ft_tolower: %d, tolower: %d  | ", my_res, real_res);
    if (my_res == real_res)
        printf("\033[32m[OK]\033[0m\n");
    else
        printf("\033[31m[KO]\033[0m\n");
}

int main(void)
{
    printf("--- Testing ft_tolower ---\n\n");

    printf("--- Loop from 0 to 127 ---\n");
    for (int i = 0; i <= 127; i++)
        test_tolower(i);
    
    printf("\n--- Edge Cases ---\n");
    test_tolower(-1);
    test_tolower(128);
    test_tolower(255);
    test_tolower(' ');
    test_tolower('9');
    test_tolower('a');
    test_tolower('A');

    printf("\n--- End of tests ---\n");
    return (0);
}
*/