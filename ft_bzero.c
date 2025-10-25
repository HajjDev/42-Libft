/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:58:11 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:59:03 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*t;

	if (!s)
		return ;
	i = 0;
	t = (char *)s;
	while (i < n)
	{
		t[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

void    check_memory(const char *t, const void *s1, const void *s2, size_t n)
{
    int diff = memcmp(s1, s2, n);
    printf("Test: \"%s\"... ", t);
    if (diff == 0)
        printf("\033[32m[OK]\033[0m\n");
    else
        printf("\033[31m[KO]\033[0m\n");
}

int main(void)
{
    printf("--- Testing ft_bzero ---\n\n");

    char str1_ft[] = "Hello World";
    char str1_real[] = "Hello World";
    ft_bzero(str1_ft, 5);
    memset(str1_real, 0, 5);
    check_memory("Zero first 5 bytes", str1_ft, str1_real, 12);

    char str2_ft[] = "Hello World";
    char str2_real[] = "Hello World";
    ft_bzero(str2_ft, 11);
    memset(str2_real, 0, 11);
    check_memory("Zero full string", str2_ft, str2_real, 12);

    char str3_ft[] = "Hello World";
    char str3_real[] = "Hello World";
    ft_bzero(str3_ft, 0);
    memset(str3_real, 0, 0);
    check_memory("Zero 0 bytes", str3_ft, str3_real, 12);

    int arr_ft[] = {123, 456, 789, -10};
    int arr_real[] = {123, 456, 789, -10};
    size_t arr_size = sizeof(arr_ft);
    ft_bzero(arr_ft, sizeof(int) * 2);
    memset(arr_real, 0, sizeof(int) * 2);
    check_memory("Zero int array (first 2 ints)", arr_ft, arr_real, arr_size);
    
    int arr2_ft[] = {123, 456, 789, -10};
    int arr2_real[] = {123, 456, 789, -10};
    size_t arr2_size = sizeof(arr2_ft);
    ft_bzero(arr2_ft, arr2_size);
    memset(arr2_real, 0, arr2_size);
    check_memory("Zero full int array", arr2_ft, arr2_real, arr2_size);

    size_t large_size = 1024;
    char *buf_ft = malloc(large_size);
    char *buf_real = malloc(large_size);
    memset(buf_ft, 'A', large_size);
    memset(buf_real, 'A', large_size);
    ft_bzero(buf_ft + 100, 500);
    memset(buf_real + 100, 0, 500);
    check_memory("Zero large heap buffer", buf_ft, buf_real, large_size);
    free(buf_ft);
    free(buf_real);
    
    printf("Test: \"NULL pointer\"... ");
    ft_bzero(NULL, 10);
    printf("\033[32m[OK]\033[0m (Did not crash)\n"); 

    printf("\n--- End of tests ---\n");
    return (0);
}
*/