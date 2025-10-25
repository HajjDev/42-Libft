/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:21:23 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:23:32 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

void    test_toupper(int c)
{
    int my_res = ft_toupper(c);
    int real_res = toupper(c);

    printf("Char: '%c' (%d) ", (c >= 32 && c <= 126) ? c : '?', c);
    printf(" |  ft_toupper: %d, toupper: %d  | ", my_res, real_res);
    if (my_res == real_res)
        printf("\033[32m[OK]\033[0m\n");
    else
        printf("\033[31m[KO]\033[0m\n");
}

int main(void)
{
    printf("--- Testing ft_toupper ---\n\n");

    printf("--- Loop from 0 to 127 ---\n");
    for (int i = 0; i <= 127; i++)
        test_toupper(i);
    
    printf("\n--- Edge Cases ---\n");
    test_toupper(-1);
    test_toupper(128);
    test_toupper(255);
    test_toupper(' ');
    test_toupper('9');
    test_toupper('Z');
    test_toupper('a');

    printf("\n--- End of tests ---\n");
    return (0);
}
*/