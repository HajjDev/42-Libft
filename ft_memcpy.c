/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:03:07 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:11:37 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	if (!dst)
		return (NULL);
	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

void    check_memory(const char *test, const void *s1, const void *s2, size_t n)
{
    int diff = memcmp(s1, s2, n);
    printf("Test: \"%s\"... ", test);
    if (diff == 0)
        printf("\033[32m[OK]\033[0m\n");
    else
        printf("\033[31m[KO]\033[0m\n");
}

int main(void)
{
    printf("--- Testing ft_memcpy ---\n\n");

    char src1[] = "Hello World";
    char dst1_ft[20];
    char dst1_real[20];

    ft_memcpy(dst1_ft, src1, 12);
    memcpy(dst1_real, src1, 12);
    check_memory("Basic string copy", dst1_ft, dst1_real, 12);

    char src2[] = "abcdefg";
    char dst2_ft[10] = "zzzzzzzzz";
    char dst2_real[10] = "zzzzzzzzz";
    ft_memcpy(dst2_ft + 2, src2, 5);
    memcpy(dst2_real + 2, src2, 5);
    check_memory("Copy into middle of buffer", dst2_ft, dst2_real, 10);

    char src3[] = "Test";
    char dst3_ft[5] = "AAAA";
    char dst3_real[5] = "AAAA";
    ft_memcpy(dst3_ft, src3, 0);
    memcpy(dst3_real, src3, 0);
    check_memory("Copy 0 bytes", dst3_ft, dst3_real, 5);

    int src_arr[] = {10, 20, 30, 40};
    int dst_arr_ft[4];
    int dst_arr_real[4];
    size_t arr_size = sizeof(src_arr);
    ft_memcpy(dst_arr_ft, src_arr, arr_size);
    memcpy(dst_arr_real, src_arr, arr_size);
    check_memory("Copy int array", dst_arr_ft, dst_arr_real, arr_size);

    printf("Test: \"NULL dst\"... ");
    void *ret_ft = ft_memcpy(NULL, src1, 5);
    if (ret_ft == NULL)
        printf("\033[32m[OK]\033[0m (Returned NULL)\n");
    else
        printf("\033[31m[KO]\033[0m (Did not return NULL)\n");

    printf("Test: \"NULL src with n=0\"... ");
    char dst4[10] = "Test";
    ft_memcpy(dst4, NULL, 0);
    memcpy(dst4, NULL, 0);
    check_memory("NULL src with n=0", dst4, "Test", 5);

    printf("\n--- End of tests ---\n");
    return (0);
}
*/