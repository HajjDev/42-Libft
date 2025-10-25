/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:46:05 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:58:38 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;
	size_t	i;

	src_length = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_length);
}

/*
#include <stdio.h>
#include <string.h>

void    test_strlcpy(const char *src, size_t dstsize, const char *test_name)
{
    // Add a small buffer to check for overflows
    char dst_ft[100];
    char dst_real[100];
    
    // Initialize buffers to a known state
    memset(dst_ft, 'X', 100);
    memset(dst_real, 'X', 100);

    printf("--- Test: \"%s\" ---\n", test_name);
    printf("  Src: \"%s\", Dstsize: %zu\n", src, dstsize);

    size_t ret_ft = ft_strlcpy(dst_ft, src, dstsize);
    size_t ret_real = strlcpy(dst_real, src, dstsize);

    printf("  ft_strlcpy ret: %zu, dst: \"%s\"\n", ret_ft, dst_ft);
    printf("     strlcpy ret: %zu, dst: \"%s\"\n", ret_real, dst_real);

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
    printf("=== Testing ft_strlcpy ===\n\n");

    test_strlcpy("Hello World", 12, "Full copy");
    test_strlcpy("Hello World", 6, "Truncated copy ('Hello')");
    test_strlcpy("Hello World", 1, "Dstsize = 1");
    test_strlcpy("Hello World", 0, "Dstsize = 0");
    test_strlcpy("", 10, "Empty src");
    test_strlcpy("test", 100, "Dstsize larger than test buffer");
    test_strlcpy("A very long string", 15, "Long string truncate");

    printf("\n=== End of tests ===\n");
    return (0);
}
*/