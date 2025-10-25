/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:57:33 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 13:02:52 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	i = 0;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

void    test_memmove(const char *t, const char *i_s, int d_o, int s_o, size_t n)
{
    size_t buf_size = strlen(i_s) + 20;
    char buf_ft[buf_size];
    char buf_real[buf_size];

    memset(buf_ft, 'Z', buf_size);
    memset(buf_real, 'Z', buf_size);

    strcpy(buf_ft, i_s);
    strcpy(buf_real, i_s);

    char *dest_ft = buf_ft + d_o;
    char *src_ft = buf_ft + s_o;
    char *dest_real = buf_real + d_o;
    char *src_real = buf_real + s_o;

    void *ret_ft = ft_memmove(dest_ft, src_ft, n);
    memmove(dest_real, src_real, n);

    int content_diff = memcmp(buf_ft, buf_real, buf_size);
    int ret_diff = (ret_ft != dest_ft);
    
    printf("Test: \"%s\"... ", t);

    if (content_diff == 0 && ret_diff == 0)
    {
        printf("\033[32m[OK]\033[0m\n");
    }
    else
    {
        printf("\033[31m[KO]\033[0m\n");
        if (content_diff != 0)
        {
            printf("  Content mismatch:\n");
            printf("    Expected: \"%s\"\n", buf_real);
            printf("    Got:      \"%s\"\n", buf_ft);
        }
        if (ret_diff != 0)
            printf("  Incorrect. Expected: %p, Got: %p\n", dest_ft, ret_ft);
    }
}

int main(void)
{
    printf("--- Testing ft_memmove ---\n\n");
    
    char base_str[] = "0123456789abcdefghij";

    test_memmove("No overlap, dst < src", base_str, 0, 10, 10);
    test_memmove("No overlap, dst > src", base_str, 10, 0, 10);
    
    test_memmove("Overlap, dst > src", base_str, 5, 0, 10);
    test_memmove("Overlap, dst < src", base_str, 0, 5, 10);

    test_memmove("n = 0", base_str, 0, 5, 0);
    test_memmove("dst == src", base_str, 5, 5, 10);

    printf("Test: \"NULL, NULL, n=0\"... ");
    if (ft_memmove(NULL, NULL, 0) == NULL)
        printf("\033[32m[OK]\033[0m\n");
    else
        printf("\033[31m[KO]\033[0m\n");
        
    printf("Test: \"NULL, NULL, n=5\"... ");
    if (ft_memmove(NULL, NULL, 5) == NULL)
        printf("\033[32m[OK]\033[0m\n");
    else
        printf("\033[31m[KO]\033[0m\n");

    printf("\n--- End of tests ---\n");
    return (0);
}
*/