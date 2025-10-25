/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:24:39 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:19:30 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}

/*
#include <stdio.h>
#include <string.h>

void    test_strchr(const char *s, int c)
{
    char *my_res = ft_strchr(s, c);
    char *real_res = strchr(s, c);

    printf("String: \"%s\", Char: '%c' (%d)\n", s, c, c);
    printf("  ft_strchr: %p", my_res);
    if (my_res)
        printf(" (points to: \"%s\")\n", my_res);
    else
        printf(" (points to: (null))\n");
    
    printf("     strchr: %p", real_res);
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
    
    printf("--- Testing ft_strchr ---\n\n");

    test_strchr(str, 'W');
    test_strchr(str, 'H');
    test_strchr(str, 'd');
    test_strchr(str, 'l');
    test_strchr(str, 'z');
    test_strchr(str, '\0');
    test_strchr(str, 'l' + 256);
    test_strchr("", 'a');
    test_strchr("", '\0');

    printf("--- End of tests ---\n");
    return (0);
}
*/