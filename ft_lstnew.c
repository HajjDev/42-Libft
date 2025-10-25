/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:12:13 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:56:21 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("--- Testing ft_lstnew ---\n\n");

    printf("--- Test 1: String content ---\n");
    char *s = "Hello World";
    t_list *node1 = ft_lstnew(s);

    if (node1 && node1->next == NULL && node1->content == s)
    {
        printf("  Content: \"%s\"\n", (char *)node1->content);
        printf("  Result: \033[32m[OK]\033[0m\n");
    }
    else
    {
        printf("  Result: \033[31m[KO]\033[0m\n");
    }
    
    printf("\n--- Test 2: Integer content ---\n");
    int x = 42;
    t_list *node2 = ft_lstnew(&x);
    
    if (node2 && node2->next == NULL && node2->content == &x)
	{
		if (*(int *)node2->content == 42)
    	{
        printf("  Content: %d\n", *(int *)node2->content);
        printf("  Result: \033[32m[OK]\033[0m\n");
    	}
	}
    else
    {
        printf("  Result: \033[31m[KO]\033[0m\n");
    }

    printf("\n--- Test 3: NULL content ---\n");
    t_list *node3 = ft_lstnew(NULL);
    
    if (node3 && node3->next == NULL && node3->content == NULL)
    {
        printf("  Content: (NULL)\n");
        printf("  Result: \033[32m[OK]\033[0m\n");
    }
    else
    {
        printf("  Result: \033[31m[KO]\033[0m\n");
    }
    
    free(node1);
    free(node2);
    free(node3);

    printf("\n--- End of tests ---\n");
    return (0);
}
*/