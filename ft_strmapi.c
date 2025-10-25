/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:45:10 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:44:17 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*modif;
	unsigned int	i;
	size_t			length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	modif = (char *)malloc((length + 1) * sizeof(char));
	if (!modif)
		return (NULL);
	i = 0;
	while (i < length)
	{
		modif[i] = (*f)(i, s[i]);
		i++;
	}
	modif[i] = '\0';
	return (modif);
}

/*
#include <stdio.h>
#include <string.h>

static char add_index_to_char(unsigned int i, char c)
{
    return (c + i);
}

void    test_strmapi(const char *s, const char *expected)
{
    printf("--- Test ---\n");
    if (s)
        printf("  String: \"%s\"\n", s);
    else
        printf("  String: (NULL)\n");
    
    char *my_str = ft_strmapi(s, add_index_to_char);

    printf("  Expected: \"%s\"\n", expected);
    printf("  Got:      \"%s\"\n", my_str);

    if (my_str == NULL && expected == NULL)
    {
        printf("  Result: \033[32m[OK]\033[0m (Both NULL)\n");
    }
    else if (my_str == NULL || expected == NULL)
    {
        printf("  Result: \033[31m[KO]\033[0m (One is NULL, one is not)\n");
    }
    else if (strcmp(my_str, expected) == 0)
    {
        if (s && my_str == s)
            printf("  Result: \033[31m[KO]\033[0m (Did not allocate!)\n");
        else
            printf("  Result: \033[32m[OK]\033[0m\n");
    }
    else
    {
        printf("  Result: \033[31m[KO]\033[0m (Strings do not match)\n");
    }
    
    printf("------------\n");

    if (my_str)
        free(my_str);
}

int main(void)
{
    printf("=== Testing ft_strmapi ===\n\n");

    test_strmapi("hello", "hfnos");
    test_strmapi("42School", "43Ufltus");
    test_strmapi("a", "a");
    test_strmapi("", "");
    test_strmapi(NULL, NULL);
    
    printf("\n=== End of tests ===\n");
    return (0);
}
*/