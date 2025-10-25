/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:43:47 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:40:36 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

static int get_sign(int n)
{
    if (n > 0)
        return 1;
    if (n < 0)
        return -1;
    return 0;
}

void    test_strncmp(const char *s1, const char *s2, size_t n)
{
    int my_res = ft_strncmp(s1, s2, n);
    int real_res = strncmp(s1, s2, n);
    
    int my_sign = get_sign(my_res);
    int real_sign = get_sign(real_res);

    printf("s1: \"%s\", s2: \"%s\", n: %zu\n", s1, s2, n);
    printf("  ft_strncmp: %d (sign: %d)\n", my_res, my_sign);
    printf("     strncmp: %d (sign: %d)\n", real_res, real_sign);

    if (my_sign == real_sign)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    printf("--------------------------------------\n");
}

int main(void)
{
    printf("--- Testing ft_strncmp ---\n\n");

    test_strncmp("Hello World", "Hello World", 12);
    test_strncmp("Hello World", "Hello World", 5);
    test_strncmp("Hello World", "Hello", 5);
    test_strncmp("Hello World", "Hello", 6);
    test_strncmp("Hello", "Hello World", 6);
    test_strncmp("Hello World", "Hello Earth", 12);
    test_strncmp("Hello Earth", "Hello World", 12);
    test_strncmp("abc", "abd", 3);
    test_strncmp("abc", "abd", 2);
    test_strncmp("abc", "ABC", 3);
    
    test_strncmp("Hello", "World", 0);
    test_strncmp("", "", 1);
    test_strncmp("a", "", 1);
    test_strncmp("", "a", 1);
    
    test_strncmp("test\200", "test\0", 6);
    test_strncmp("test\0", "test\200", 6);

    printf("--- End of tests ---\n");
    return (0);
}
*/