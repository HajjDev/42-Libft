/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:57:03 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 11:57:31 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*t;
	size_t	total;

	if (size != 0 && count > (size_t)(-1) / size)
		return (NULL);
	total = count * size;
	t = malloc(total);
	if (!t)
		return (NULL);
	ft_bzero(t, total);
	return (t);
}
/*
#include <stdio.h>
#include <string.h>

static int  check_is_zeroed(void *ptr, size_t n)
{
    unsigned char *p = (unsigned char *)ptr;
    while (n-- > 0)
    {
        if (*p++ != 0)
            return (0);
    }
    return (1);
}

static void test_calloc(const char *test_name, size_t count, size_t size)
{
    printf("Test: \"%s\" (count=%zu, size=%zu)... ", test_name, count, size);
    
    void *ptr = ft_calloc(count, size);
    size_t total_size = count * size;

    if (size != 0 && count > (size_t)(-1) / size)
    {
        if (ptr == NULL)
            printf("\033[32m[OK]\033[0m (Overflow handled)\n");
        else
            printf("\033[31m[KO]\033[0m (Did not return NULL on overflow)\n");
    }
    else if (total_size == 0)
    {
        if (ptr != NULL)
        {
            printf("\033[32m[OK]\033[0m (Returned non-NULL for size 0)\n");
            free(ptr);
        }
        else
        {
            printf("\033[32m[OK]\033[0m (Returned NULL for size 0)\n");
        }
    }
    else if (ptr == NULL)
    {
        printf("\033[31m[KO]\033[0m (Returned NULL on valid allocation)\n");
    }
    else
    {
        if (check_is_zeroed(ptr, total_size))
            printf("\033[32m[OK]\033[0m\n");
        else
            printf("\033[31m[KO]\033[0m (Memory not zeroed)\n");
        free(ptr);
    }
}

int main(void)
{
    printf("--- Testing ft_calloc ---\n\n");

    test_calloc("Basic allocation", 10, sizeof(char));
    test_calloc("Int array", 5, sizeof(int));
    test_calloc("Large allocation", 1024, 1024);
    test_calloc("Count = 0", 0, sizeof(int));
    test_calloc("Size = 0", 10, 0);
    test_calloc("Count = 0, Size = 0", 0, 0);

    test_calloc("Overflow test 1", (size_t)(-1) / 2 + 1, 2);
    test_calloc("Overflow test 2", 2, (size_t)(-1) / 2 + 1);
    test_calloc("Overflow test 3", (size_t)(-1), 2);

    printf("\n--- End of tests ---\n");
    return (0);
}
*/