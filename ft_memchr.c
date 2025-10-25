/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:00:33 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:09:24 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*t;
	size_t	i;

	t = (char *)s;
	i = 0;
	while (i < n)
	{
		if (t[i] == (char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

void    test_memchr(const void *s, int c, size_t n)
{
    void *my_res = ft_memchr(s, c, n);
    void *real_res = memchr(s, c, n);

    printf("Str: \"%s\", Char: '%c' (%d), N: %zu\n", (const char *)s, c, c, n);
    printf("  ft_memchr: %p\n", my_res);
    printf("     memchr: %p\n", real_res);

    if (my_res == real_res)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    printf("--------------------------------------\n");
}

int main(void)
{
    char str[] = "Hello World";
    int arr[] = {1, 2, 3, 4, 5, 258};
    
    printf("--- Testing ft_memchr ---\n\n");

    test_memchr(str, 'W', 11);
    test_memchr(str, 'H', 11);
    test_memchr(str, 'd', 11);
    test_memchr(str, 'l', 3);
    test_memchr(str, 'o', 4);
    test_memchr(str, 'W', 5);
    test_memchr(str, 'z', 11);
    test_memchr(str, '\0', 12);
    test_memchr(str, 'W', 0);
    test_memchr("", 'a', 1);

    test_memchr(arr, 3, sizeof(arr));
    test_memchr(arr, 2, sizeof(arr));
    test_memchr(arr, 258, sizeof(arr));

    printf("--- End of tests ---\n");
    return (0);
}
*/