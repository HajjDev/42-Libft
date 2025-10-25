/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:42:58 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:30:53 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contains(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_getlength(char const *s, char const *set)
{
	size_t	length;
	size_t	start;
	size_t	i;

	length = ft_strlen(s);
	i = 0;
	while (s[i] && ft_contains(set, s[i]))
	{
		length--;
		i++;
	}
	if (length == 0)
		return (0);
	start = i;
	i = ft_strlen(s) - 1;
	while (i > start && s[i] && ft_contains(set, s[i]))
	{
		length--;
		i--;
	}
	return (length);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;
	size_t	i;
	size_t	j;
	char	*trimmed_s;

	if (!s1)
		return (NULL);
	length = ft_getlength(s1, set);
	trimmed_s = (char *)malloc((length + 1) * sizeof(char));
	if (!trimmed_s)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] && ft_contains(set, s1[i]))
		i++;
	while (j < length)
	{
		trimmed_s[j] = s1[i];
		j++;
		i++;
	}
	trimmed_s[j] = '\0';
	return (trimmed_s);
}

/*
#include <stdio.h>
#include <string.h>

void    test_strtrim(const char *s1, const char *set, const char *expected)
{
    printf("--- Test ---\n");
    if (s1)
        printf("  String: \"%s\"\n", s1);
    else
        printf("  String: (NULL)\n");
    printf("  Set:    \"%s\"\n", set);
    
    char *my_trim = ft_strtrim(s1, set);

    printf("  Expected: \"%s\"\n", expected);
    printf("  Got:      \"%s\"\n", my_trim);

    if (my_trim == NULL && expected == NULL)
    {
        printf("  Result: \033[32m[OK]\033[0m (Both NULL)\n");
    }
    else if (my_trim == NULL || expected == NULL)
    {
        printf("  Result: \033[31m[KO]\033[0m (One is NULL, one is not)\n");
    }
    else if (strcmp(my_trim, expected) == 0)
    {
        printf("  Result: \033[32m[OK]\033[0m\n");
    }
    else
    {
        printf("  Result: \033[31m[KO]\033[0m (Strings do not match)\n");
    }
    
    printf("------------\n");

    if (my_trim)
        free(my_trim);
}

int main(void)
{
    printf("=== Testing ft_strtrim ===\n\n");

    test_strtrim("  Hello World  ", " ", "Hello World");
    test_strtrim("xxHello Worldxx", "x", "Hello World");
    test_strtrim("abHello Worldba", "ab", "Hello World");
    test_strtrim("  Hello World", " ", "Hello World");
    test_strtrim("Hello World  ", " ", "Hello World");
    test_strtrim("Hello   World", " ", "Hello   World");
    test_strtrim("Hello World", "xyz", "Hello World");
    test_strtrim("   ", " ", "");
    test_strtrim("abc", "cba", "");
    test_strtrim("", " ", "");
    test_strtrim("Hello", "", "Hello");
    test_strtrim("x x x", "x", " x ");
    test_strtrim("Hello World", "HeldWor", " ");
    test_strtrim(NULL, " ", NULL);
    
    printf("\n=== End of tests ===\n");
    return (0);
}
*/