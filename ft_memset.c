/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:51:31 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:15:52 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	if (!b)
		return (NULL);
	i = 0;
	s = (unsigned char *)b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
#include <string.h>

void    test_memset(const char *test_name, int c, size_t len)
{
    char buf_ft[100];
    char buf_real[100];
    
    memset(buf_ft, 'X', 100);
    memset(buf_real, 'X', 100);

    void *ret_ft = ft_memset(buf_ft, c, len);
    memset(buf_real, c, len);

    int content_diff = memcmp(buf_ft, buf_real, 100);
    int ret_diff = (ret_ft != buf_ft);

    printf("Test: \"%s\"... ", test_name);
    if (content_diff == 0 && ret_diff == 0)
    {
        printf("\033[32m[OK]\033[0m\n");
    }
    else
    {
        printf("\033[31m[KO]\033[0m\n");
        if (content_diff != 0)
            printf("  Content mismatch.\n");
        if (ret_diff != 0)
            printf("  Incorrect. Expected: %p, Got: %p\n", buf_ft, ret_ft);
    }
}

int main(void)
{
    printf("--- Testing ft_memset ---\n\n");

    test_memset("Set 10 bytes to 'A'", 'A', 10);
    test_memset("Set 0 bytes to 'B'", 'B', 0);
    test_memset("Set 50 bytes to 0", 0, 50);
    test_memset("Set 5 bytes to int ('C' + 256)", 'C' + 256, 5);
    test_memset("Set 99 bytes to 'Z'", 'Z', 99);
    
    printf("Test: \"NULL buffer\"... ");
    void *null_ret = ft_memset(NULL, 'A', 5);
    if (null_ret == NULL)
        printf("\033[32m[OK]\033[0m (Returned NULL)\n");
    else
        printf("\033[31m[KO]\033[0m (Did not return NULL)\n");

    printf("\n--- End of tests ---\n");
    return (0);
}
*/