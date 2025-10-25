/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:07:24 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:26:17 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*substring;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i])
	{
		substring[j] = s[i];
		j++;
		i++;
	}
	substring[j] = '\0';
	return (substring);
}

/*
#include <stdio.h>
#include <string.h>
#include <limits.h>

void    test_substr(const char *s, unsigned int st, size_t len, const char *exp)
{
    printf("--- Test ---\n");
    printf("  String: \"%s\", Start: %u, Len: %zu\n", s, st, len);
    
    char *my_sub = ft_substr(s, st, len);

    printf("  Expected: \"%s\"\n", exp);
    printf("  Got:      \"%s\"\n", my_sub);

    if (my_sub == NULL && exp == NULL)
    {
        printf("  Result: \033[32m[OK]\033[0m (Both NULL)\n");
    }
    else if (my_sub == NULL || exp == NULL)
    {
        printf("  Result: \033[31m[KO]\033[0m (One is NULL, one is not)\n");
    }
    else if (strcmp(my_sub, exp) == 0)
    {
        printf("  Result: \033[32m[OK]\033[0m\n");
    }
    else
    {
        printf("  Result: \033[31m[KO]\033[0m (Strings do not match)\n");
    }
    
    printf("------------\n");

    if (my_sub)
        free(my_sub);
}

int main(void)
{
    printf("=== Testing ft_substr ===\n\n");

    test_substr("Hello World", 6, 5, "World");
    test_substr("Hello World", 0, 5, "Hello");
    test_substr("Hello World", 3, 100, "lo World");
    test_substr("Hello World", 100, 5, "");
    test_substr("Hello World", 3, 0, "");
    test_substr("", 0, 5, "");
    test_substr("tripouille", 0, 42000, "tripouille");
    test_substr("tripouille", 1, 1, "r");
    test_substr("tripouille", 100, 1, "");
    test_substr("42", 0, 0, "");
    test_substr(NULL, 0, 5, NULL);
    
    printf("\n=== End of tests ===\n");
    return (0);
}
*/