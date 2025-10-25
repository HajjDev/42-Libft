/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:47:32 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:34:10 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

void    test_strlen(const char *s)
{
    size_t my_len = ft_strlen(s);
    size_t real_len = strlen(s);

    printf("String: \"%s\"\n", s);
    printf("  ft_strlen: %zu\n", my_len);
    printf("     strlen: %zu\n", real_len);

    if (my_len == real_len)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    printf("--------------------------------------\n");
}

int main(void)
{
    printf("--- Testing ft_strlen ---\n\n");

    test_strlen("Hello World");
    test_strlen("");
    test_strlen("a");
    test_strlen("12345");
    test_strlen("This is a much longer test string to see if it works.");

    printf("--- End of tests ---\n");
    return (0);
}
*/