/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:58:24 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:52:43 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	if (!dst && !src)
		return (0);
	else if (!dst)
		return (ft_strlen(src));
	else if (!src)
		return (ft_strlen(dst));
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	i = 0;
	while (dstlen + i < dstsize - 1 && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*
#include <stdio.h>
#include <string.h>

void    test_strlcat(char *ini_dst, const char *src, size_t dsts, const char *t)
{
    char dst_ft[100];
    char dst_real[100];
    
    char *p_ft = dst_ft;
    char *p_real = dst_real;

    memset(dst_ft, 'X', 100);
    memset(dst_real, 'X', 100);
    
    if (ini_dst)
    {
        strcpy(dst_ft, ini_dst);
        strcpy(dst_real, ini_dst);
    }
    else
    {
        p_ft = NULL;
        p_real = NULL;
    }

    printf("--- Test: \"%s\" ---\n", t);
    printf("  Init dst: \"%s\", Src: \"%s\", Dsts: %zu\n", ini_dst, src, dsts);

    size_t ret_ft = ft_strlcat(p_ft, src, dsts);
    size_t ret_real = strlcat(p_real, src, dsts);

    printf("  ft_strlcat ret: %zu", ret_ft);
    if (p_ft) printf(", dst: \"%s\"\n", p_ft); else printf(", dst: (NULL)\n");
    
    printf("     strlcat ret: %zu", ret_real);
    if (p_real) printf(",dst: \"%s\"\n", p_real); else printf(", dst: (NULL)\n");

    int ret_ok = (ret_ft == ret_real);
    int content_ok = (memcmp(dst_ft, dst_real, 100) == 0);

    if (ret_ok && content_ok)
    {
        printf("  Result: \033[32m[OK]\033[0m\n");
    }
    else
    {
        printf("  Result: \033[31m[KO]\033[0m\n");
        if (!ret_ok)
            printf("    Return value mismatch!\n");
        if (!content_ok)
            printf("    Destination content mismatch!\n");
    }
    printf("--------------------------------------\n");
}

int main(void)
{
    printf("=== Testing ft_strlcat ===\n\n");

    test_strlcat("Hello ", "World", 12, "Full concat");
    test_strlcat("Hello ", "World", 11, "Full concat (exact size)");
    test_strlcat("This is a test", " of the emergency", 20, "Truncated concat");
    test_strlcat("abc", "def", 2, "Dstsize < dstlen");
    test_strlcat("abc", "def", 5, "Truncated (dstsize 5)");
    test_strlcat("", "Testing empty dst", 20, "Empty dst");
    test_strlcat("Hello", "", 20, "Empty src");
    test_strlcat("Hello", "123", 1, "Dstsize = 1");
    test_strlcat("Hello", "123", 0, "Dstsize = 0");

    printf("\n--- Edge Cases ---\n");
    test_strlcat(NULL, "hello", 0, "dst = NULL, dstsize = 0");

    printf("\n=== End of tests ===\n");
    return (0);
}
*/