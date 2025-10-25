/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:22:05 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 13:24:06 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	if (!*lst)
		*lst = new;
	else
	{
		t = *lst;
		while (t->next)
			t = t->next;
		t->next = new;
	}
}

/*
#include <stdio.h>

void    print_list(t_list *lst)
{
    printf("  List: [");
    while (lst)
    {
        if (lst->content)
            printf("\"%s\"", (char *)lst->content);
        else
            printf("(NULL_CONTENT)");
            
        if (lst->next)
            printf(", ");
        lst = lst->next;
    }
    printf("]\n");
}

int main(void)
{
    t_list *list = NULL;
    t_list *node1, *node2, *node3, *node_null;

    printf("--- Testing ft_lstadd_back ---\n\n");

    printf("--- Test 1: Add to NULL list ---\n");
    node1 = ft_lstnew("Node 1");
    ft_lstadd_back(&list, node1);
    
    printf("  Expected: [\"Node 1\"]\n");
    print_list(list);
    if (list == node1 && list->next == NULL)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    printf("\n--- Test 2: Add to existing list ---\n");
    node2 = ft_lstnew("Node 2");
    ft_lstadd_back(&list, node2);
    
    printf("  Expected: [\"Node 1\", \"Node 2\"]\n");
    print_list(list);
    if (list == node1 && list->next == node2 && list->next->next == NULL)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    printf("\n--- Test 3: Add a third node ---\n");
    node3 = ft_lstnew("Node 3");
    ft_lstadd_back(&list, node3);
    
    printf("  Expected: [\"Node 1\", \"Node 2\", \"Node 3\"]\n");
    print_list(list);
    if (list->next->next == node3 && list->next->next->next == NULL)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    printf("\n--- Test 4: Add NULL node ---\n");
    node_null = NULL;
    ft_lstadd_back(&list, node_null);
    
    printf("  Expected: [\"Node 1\", \"Node 2\", \"Node 3\"]\n");
    print_list(list);

    if (list->next->next == node3 && list->next->next->next == NULL)
         printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    
    free(node1);
    free(node2);
    free(node3);

    printf("\n--- End of tests ---\n");
    return (0);
}
*/