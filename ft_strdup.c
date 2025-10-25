/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:04:10 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:33:44 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

void    test_strdup(const char *s1)
{
    char *my_dup = ft_strdup(s1);
    char *real_dup = strdup(s1);

    printf("String: \"%s\"\n", s1);
    printf("  ft_strdup: %p", (void *)my_dup);
    if (my_dup)
        printf(" -> \"%s\"\n", my_dup);
    else
        printf(" -> (NULL)\n");

    printf("     strdup: %p", (void *)real_dup);
    if (real_dup)
        printf(" -> \"%s\"\n", real_dup);
    else
        printf(" -> (NULL)\n");


    if (my_dup == NULL && real_dup == NULL)
    {
        printf("  Result: \033[32m[OK]\033[0m (Both NULL)\n");
    }
    else if (my_dup == NULL || real_dup == NULL)
    {
        printf("  Result: \033[31m[KO]\033[0m (One is NULL, one is not)\n");
    }
    else if (strcmp(my_dup, real_dup) == 0)
    {
        if (my_dup == s1)
            printf("  Result: \033[31m[KO]\033[0m (Did not allocate!)\n");
        else
            printf("  Result: \033[32m[OK]\033[0m\n");
    }
    else
    {
        printf("  Result: \033[31m[KO]\033[0m (Strings do not match)\n");
    }
    
    printf("--------------------------------------\n");

    if (my_dup)
        free(my_dup);
    if (real_dup)
        free(real_dup);
}

int main(void)
{
    printf("--- Testing ft_strdup ---\n\n");

    test_strdup("Hello World");
    test_strdup("This is a test.");
    test_strdup("A");
    test_strdup("");
    
    printf("--- End of tests ---\n");
    return (0);
}
*/