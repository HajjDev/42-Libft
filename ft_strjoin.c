/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:49:46 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:39:08 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_concat(char const *s1, char const *s2, char *concat)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[j])
	{
		concat[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*js;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	js = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!js)
		return (NULL);
	return (ft_concat(s1, s2, js));
}

/*
#include <stdio.h>
#include <string.h>

void    test_strjoin(char const *s1, char const *s2, const char *expected)
{
    printf("--- Test ---\n");
    printf("  s1: \"%s\"\n", s1);
    printf("  s2: \"%s\"\n", s2);
    
    char *my_join = ft_strjoin(s1, s2);

    printf("  Expected: \"%s\"\n", expected);
    printf("  Got:      \"%s\"\n", my_join);
    
    if (my_join == NULL && expected == NULL)
    {
        printf("  Result: \033[32m[OK]\033[0m (Both NULL)\n");
    }
    else if (my_join == NULL || expected == NULL)
    {
        printf("  Result: \033[31m[KO]\033[0m (One is NULL, one is not)\n");
    }
    else if (strcmp(my_join, expected) == 0)
    {
        if ((s1 && my_join == s1) || (s2 && my_join == s2))
            printf("  Result: \033[31m[KO]\033[0m (Did not allocate!)\n");
        else
            printf("  Result: \033[32m[OK]\033[0m\n");
    }
    else
    {
        printf("  Result: \033[31m[KO]\033[0m (String mismatch)\n");
    }
    
    printf("------------\n");

    if (my_join)
        free(my_join);
}

int main(void)
{
    printf("=== Testing ft_strjoin ===\n\n");

    test_strjoin("Hello, ", "world!", "Hello, world!");
    test_strjoin("", "world!", "world!");
    test_strjoin("Hello, ", "", "Hello, ");
    test_strjoin("", "", "");
    test_strjoin("abc", "def", "abcdef");
    
    printf("\n--- Testing NULL cases ---\n");
    test_strjoin(NULL, "test string", "test string");
    test_strjoin("test string", NULL, "test string");
    test_strjoin(NULL, NULL, "");

    printf("\n=== End of tests ===\n");
    return (0);
}
*/