/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:09:43 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 13:26:20 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

void    increment_content(void *content)
{
    if (content)
    {
        int *num = (int *)content;
        (*num)++;
    }
}

void    del_content(void *content)
{
    free(content);
}

int *new_int(int n)
{
    int *ptr = malloc(sizeof(int));
    if (ptr)
        *ptr = n;
    return (ptr);
}

void    print_list_ints(t_list *lst)
{
    printf("  List: [");
    while (lst)
    {
        if (lst->content)
            printf("%d", *(int *)lst->content);
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
    t_list *list;
    t_list *node1, *node2, *node3;

    printf("--- Testing ft_lstiter ---\n\n");

    printf("--- Test 1: Apply 'increment_content' to list ---\n");
    node1 = ft_lstnew(new_int(10));
    node2 = ft_lstnew(new_int(20));
    node3 = ft_lstnew(new_int(30));
    
    list = node1;
    if (node1)
        node1->next = node2;
    if (node2)
        node2->next = node3;

    printf("  Before: ");
    print_list_ints(list);
    
    ft_lstiter(list, increment_content);

    printf("  After:  ");
    print_list_ints(list);
    
    int val1 = -1, val2 = -1, val3 = -1;
    if (node1) val1 = *(int *)node1->content;
    if (node2) val2 = *(int *)node2->content;
    if (node3) val3 = *(int *)node3->content;

    if (val1 == 11 && val2 == 21 && val3 == 31)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    ft_lstclear(&list, del_content);

    printf("\n--- Test 2: NULL list ---\n");
    list = NULL;
    printf("  Calling ft_lstiter(NULL, increment_content)...\n");
    ft_lstiter(list, increment_content);
    printf("  Result: \033[32m[OK]\033[0m (Did not crash)\n");

    printf("\n--- End of tests ---\n");
    return (0);
}
*/