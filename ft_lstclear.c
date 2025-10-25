/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:23:28 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 13:13:10 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;
	t_list	*nxt;

	if (!lst || !del)
		return ;
	t = *lst;
	nxt = NULL;
	while (t)
	{
		nxt = t->next;
		ft_lstdelone(t, del);
		t = nxt;
	}
	*lst = NULL;
}

/*
#include <stdio.h>

static int g_del_count = 0;

void    del_int_content(void *content)
{
    free(content);
    g_del_count++;
}

int *new_int(int n)
{
    int *ptr = malloc(sizeof(int));
    if (ptr)
        *ptr = n;
    return (ptr);
}

int main(void)
{
    t_list *list = NULL;
    t_list *node1, *node2, *node3;
    
    printf("--- Testing ft_lstclear ---\n\n");

    printf("--- Test 1: 3-node list ---\n");
    g_del_count = 0;
    node1 = ft_lstnew(new_int(1));
    node2 = ft_lstnew(new_int(2));
    node3 = ft_lstnew(new_int(3));
    list = node1;
    if (list)
        node1->next = node2;
    if (node2)
        node2->next = node3;

    printf("  List pointer before: %p\n", (void *)list);
    ft_lstclear(&list, del_int_content);
    printf("  List pointer after: %p\n", (void *)list);
    printf("  Deleter call count: %d\n", g_del_count);
    
    if (list == NULL && g_del_count == 3)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    printf("\n--- Test 2: 1-node list ---\n");
    g_del_count = 0;
    list = ft_lstnew(new_int(100));
    
    printf("  List pointer before: %p\n", (void *)list);
    ft_lstclear(&list, del_int_content);
    printf("  List pointer after: %p\n", (void *)list);
    printf("  Deleter call count: %d\n", g_del_count);
    
    if (list == NULL && g_del_count == 1)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    printf("\n--- Test 3: NULL list ---\n");
    g_del_count = 0;
    list = NULL;
    
    printf("  List pointer before: %p\n", (void *)list);
    ft_lstclear(&list, del_int_content);
    printf("  List pointer after: %p\n", (void *)list);
    printf("  Deleter call count: %d\n", g_del_count);
    
    if (list == NULL && g_del_count == 0)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    printf("\n--- Test 4: NULL del function ---\n");
    g_del_count = 0;
    int *content_ptr = new_int(99);
    list = ft_lstnew(content_ptr);
    
    printf("  List pointer before: %p\n", (void *)list);
    ft_lstclear(&list, NULL);
    printf("  List pointer after: %p\n", (void *)list);
    printf("  Deleter call count: %d\n", g_del_count);
    
    if (list != NULL && g_del_count == 0)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    
    free(content_ptr);
    free(list);

    printf("\n--- Test 5: NULL lst pointer ---\n");
    printf("  Calling ft_lstclear(NULL, del_int_content)...\n");
    ft_lstclear(NULL, del_int_content);
    printf("  Result: \033[32m[OK]\033[0m (Did not crash)\n");

    printf("\n--- End of tests ---\n");
    return (0);
}
*/