/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:51:07 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:22:55 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t			length;
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	length = ft_strlen(s);
	while (i < length)
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>

static void add_index_to_char(unsigned int i, char *c)
{
    *c = *c + i;
}

static void test_striteri(const char *initial, const char *expected)
{
    char s[100];
    strcpy(s, initial);

    printf("Test: \"%s\"\n", initial);
    ft_striteri(s, add_index_to_char);
    printf("  Expected: \"%s\"\n", expected);
    printf("  Got:      \"%s\"\n", s);

    if (strcmp(s, expected) == 0)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    printf("--------------------------------------\n");
}

int main(void)
{
    printf("--- Testing ft_striteri ---\n\n");

    test_striteri("hello", "hfnos");
    test_striteri("42School", "43Ufltus");
    test_striteri("a", "a");
    test_striteri("", "");

    printf("Test: NULL pointer... ");
    ft_striteri(NULL, add_index_to_char);
    printf("\033[32m[OK]\033[0m (Did not crash)\n");

    printf("\n--- End of tests ---\n");
    return (0);
}
*/