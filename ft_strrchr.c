/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:30:30 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:31:52 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

void    test_strrchr(const char *s, int c)
{
    char *my_res;
    char *real_res;

    if (s == NULL)
    {
        printf("Test: NULL pointer, Char: '%c' (%d)\n", c, c);
        my_res = ft_strrchr(s, c);
        printf("  ft_strrchr: %p", (void *)my_res);
        if (my_res == NULL)
            printf(" -> (null) \033[32m[OK]\033[0m\n");
        else
            printf(" -> (non-null) \033[31m[KO]\033[0m\n");
        printf("--------------------------------------\n");
        return;
    }

    my_res = ft_strrchr(s, c);
    real_res = strrchr(s, c);

    printf("String: \"%s\", Char: '%c' (%d)\n", s, c, c);
    printf("  ft_strrchr: %p", (void *)my_res);
    if (my_res)
        printf(" (points to: \"%s\")\n", my_res);
    else
        printf(" (points to: (null))\n");
    
    printf("     strrchr: %p", (void *)real_res);
    if (real_res)
        printf(" (points to: \"%s\")\n", real_res);
    else
        printf(" (points to: (null))\n");

    if (my_res == real_res)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    printf("--------------------------------------\n");
}

int main(void)
{
    char str[] = "Hello World";
    char str2[] = "Hello l-l-l World";
    
    printf("--- Testing ft_strrchr ---\n\n");

    test_strrchr(str, 'o');
    test_strrchr(str, 'l');
    test_strrchr(str2, 'l');
    test_strrchr(str, 'H');
    test_strrchr(str, 'd');
    test_strrchr(str, 'z');
    test_strrchr(str, '\0');
    test_strrchr(str, 'l' + 256);
    test_strrchr("", 'a');
    test_strrchr("", '\0');
    test_strrchr(NULL, 'a');

    printf("--- End of tests ---\n");
    return (0);
}
*/