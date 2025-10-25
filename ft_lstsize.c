/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:20:21 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 12:58:07 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/*
#include <stdio.h>

int main(void)
{
    t_list *list;
    t_list *node1;
    t_list *node2;
    t_list *node3;
    int size;

    printf("--- Testing ft_lstsize ---\n\n");

    printf("--- Test 1: NULL list ---\n");
    list = NULL;
    size = ft_lstsize(list);
    printf("  Expected: 0\n");
    printf("  Got:      %d\n", size);
    if (size == 0)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    printf("\n--- Test 2: List of size 1 ---\n");
    node1 = ft_lstnew("Node 1");
    list = node1;
    size = ft_lstsize(list);
    printf("  Expected: 1\n");
    printf("  Got:      %d\n", size);
    if (size == 1)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    printf("\n--- Test 3: List of size 3 ---\n");
    node2 = ft_lstnew("Node 2");
    node3 = ft_lstnew("Node 3");
    node1->next = node2;
    node2->next = node3;
    list = node1;
    size = ft_lstsize(list);
    printf("  Expected: 3\n");
    printf("  Got:      %d\n", size);
    if (size == 3)
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