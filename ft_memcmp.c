/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:11:55 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:10:10 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*t1;
	char	*t2;

	t1 = (char *)s1;
	t2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (t1[i] != t2[i])
			return ((unsigned char)t1[i] - (unsigned char)t2[i]);
		i++;
	}
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

void    test_memcmp(const void *s1, const void *s2, size_t n)
{
    int my_res = ft_memcmp(s1, s2, n);
    int real_res = memcmp(s1, s2, n);
    
    int my_sign = get_sign(my_res);
    int real_sign = get_sign(real_res);

    printf("N = %zu\n", n);
    printf("  ft_memcmp: %d (sign: %d)\n", my_res, my_sign);
    printf("     memcmp: %d (sign: %d)\n", real_res, real_sign);

    if (my_sign == real_sign)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    printf("--------------------------------------\n");
}

int main(void)
{
    char s1[] = "Hello World";
    char s2[] = "Hello World";
    char s3[] = "Hello Earth";
    char s4[] = "Hello World!";
    char s5[] = "hELLO wORLD";
    char s6[] = "Hello\200World";
    char s7[] = "Hello\0World";

    printf("--- Testing ft_memcmp ---\n\n");

    test_memcmp(s1, s2, 12);
    test_memcmp(s1, s3, 12);
    test_memcmp(s3, s1, 12);
    test_memcmp(s1, s4, 12);
    test_memcmp(s1, s4, 11);
    test_memcmp(s1, s2, 0);
    test_memcmp(s1, s3, 0);
    test_memcmp(s1, s5, 12);
    test_memcmp(s1, s6, 12);
    test_memcmp(s6, s1, 12);
    test_memcmp(s1, s7, 12);
    test_memcmp(s7, s1, 12);
    
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 3, 4};
    int arr3[] = {1, 2, 9, 4};

    test_memcmp(arr1, arr2, sizeof(arr1));
    test_memcmp(arr1, arr3, sizeof(arr1));
    test_memcmp(arr3, arr1, sizeof(arr1));
    test_memcmp(arr1, arr3, sizeof(int) * 2);

    printf("--- End of tests ---\n");
    return (0);
}
*/