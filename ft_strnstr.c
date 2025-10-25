/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:43:03 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:33:28 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && i < len && needle[j] != '\0')
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)&haystack[i - j]);
			i -= j;
			j = 0;
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

void    test_strnstr(const char *h, const char *n, size_t len)
{
    char *my_res = ft_strnstr(h, n, len);
    char *real_res = strnstr(h, n, len);

    printf("H: \"%s\", N: \"%s\", Len: %zu\n", h, n, len);
    printf("  ft_strnstr: %p", (void *)my_res);
    if (my_res)
        printf(" -> \"%s\"\n", my_res);
    else
        printf(" -> (NULL)\n");
        
    printf("     strnstr: %p", (void *)real_res);
    if (real_res)
        printf(" -> \"%s\"\n", real_res);
    else
        printf(" -> (NULL)\n");

    if (my_res == real_res)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    printf("--------------------------------------\n");
}

int main(void)
{
    printf("--- Testing ft_strnstr ---\n\n");

    char s[] = "lorem ipsum dolor sit amet";

    test_strnstr(s, "ipsum", 27);
    test_strnstr(s, "lorem", 27);
    test_strnstr(s, "amet", 27);
    test_strnstr(s, "zebra", 27);
    test_strnstr(s, "", 27);
    test_strnstr("", "a", 1);
    test_strnstr("", "", 1);

    test_strnstr(s, "lorem", 0);
    test_strnstr(s, "", 0);
    
    test_strnstr(s, "ipsum", 10);
    test_strnstr(s, "ipsum", 11);
    test_strnstr(s, "dolor", 15);
    test_strnstr(s, "dolor", 17);
    
    test_strnstr("aaabc", "aabc", 5);
    test_strnstr("aaabc", "aabc", 4);
    test_strnstr("foofoofoo", "foofoo", 9);
    test_strnstr("barfoobar", "foobar", 9);
    test_strnstr("barfoobar", "foobar", 8);

    printf("\n--- End of tests ---\n");
    return (0);
}
*/