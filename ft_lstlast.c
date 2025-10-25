/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:20:55 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 13:04:29 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>

int main(void)
{
    t_list *list;
    t_list *node1;
    t_list *node2;
    t_list *node3;
    t_list *last;

    printf("--- Testing ft_lstlast ---\n\n");

    printf("--- Test 1: NULL list ---\n");
    list = NULL;
    last = ft_lstlast(list);
    printf("  Expected: (NULL)\n");
    printf("  Got:      %p\n", (void *)last);
    if (last == NULL)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    printf("\n--- Test 2: List of size 1 ---\n");
    node1 = ft_lstnew("Node 1");
    list = node1;
    last = ft_lstlast(list);
    printf("  Expected: %p (Node 1)\n", (void *)node1);
    printf("  Got:      %p\n", (void *)last);
    if (last == node1)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    printf("\n--- Test 3: List of size 3 ---\n");
    node2 = ft_lstnew("Node 2");
    node3 = ft_lstnew("Node 3");
    node1->next = node2;
    node2->next = node3;
    list = node1;
    last = ft_lstlast(list);
    printf("  Expected: %p (Node 3)\n", (void *)node3);
    printf("  Got:      %p\n", (void *)last);
    if (last == node3)
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