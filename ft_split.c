/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:51:49 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:18:52 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(char const *s, char c, int str)
{
	size_t	length;
	size_t	i;

	length = 0;
	i = 0;
	if (!str && s)
	{
		while (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			if (s[i])
			{
				length++;
				while (s[i] && s[i] != c)
					i++;
			}
		}
	}
	else
		if (s)
			while (s[length] && s[length] != c)
				length++;
	return (length);
}

static void	ft_skip(char const *s, char c, size_t *i)
{
	while (s[*i] && s[*i] == c)
		(*i)++;
}

static char	*ft_add(const char *s, size_t length)
{
	size_t	i;
	char	*word;

	word = (char *)malloc((length + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_free(char **tab, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	str_length;
	size_t	i;
	size_t	j;
	char	**tab;

	tab = (char **)malloc((ft_size(s, c, 0) + 1) * sizeof(char *));
	if (!tab || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		ft_skip(s, c, &i);
		str_length = ft_size(&s[i], c, 1);
		if (str_length)
		{
			tab[j] = ft_add(&s[i], str_length);
			if (!tab[j])
				return (ft_free(tab, j));
			j++;
		}
		i += str_length;
	}
	tab[j] = NULL;
	return (tab);
}

/*
#include <stdio.h>

static void free_split_array(char **array)
{
    if (!array)
        return;
    for (int i = 0; array[i] != NULL; i++)
    {
        free(array[i]);
    }
    free(array);
}

static void print_split_array(char **array)
{
    if (!array)
    {
        printf("  Result: (NULL)\n");
        return;
    }
    printf("  Result: {\n");
    int i;
    for (i = 0; array[i] != NULL; i++)
    {
        printf("    [%d]: \"%s\"\n", i, array[i]);
    }
    printf("    [%d]: (NULL)\n", i);
    printf("  }\n");
}

static void test_split(char const *s, char c)
{
    printf("--- Test ---\n");
    printf("  String: \"%s\"\n", s);
    printf("  Delimiter: '%c'\n", c);
    
    char **result = ft_split(s, c);
    
    print_split_array(result);
    free_split_array(result);
    printf("------------\n");
}

int main(void)
{
    printf("=== Testing ft_split ===\n\n");

    test_split("Hello world this is a test", ' ');
    test_split(",,,Hello,,,world,,", ',');
    test_split("   leading spaces", ' ');
    test_split("trailing spaces   ", ' ');
    test_split("   both   ", ' ');
    test_split("          ", ' ');
    test_split("", ' ');
    test_split(NULL, ' ');
    test_split("nowhitespace", ' ');
    test_split("noddelimiter", 'z');
    test_split("c", 'c');
    test_split("split z on z", 'z');
    test_split("one", ' ');

    printf("\n=== End of tests ===\n");
    return (0);
}
*/