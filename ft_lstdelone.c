/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:22:38 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 13:13:38 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}

/*
#include <stdio.h>

static int g_del_called = 0;

void    del_content(void *content)
{
    free(content);
    g_del_called = 1;
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
    t_list  *node;
    int     *content;

    printf("--- Testing ft_lstdelone ---\n\n");

    printf("--- Test 1: Normal operation ---\n");
    g_del_called = 0;
    content = new_int(42);
    node = ft_lstnew(content);
    
    printf("  Node: %p, Content: %p\n", (void *)node, (void *)content);
    ft_lstdelone(node, del_content);
    printf("  'del' function called: %s\n", g_del_called ? "Yes" : "No");
    
    if (g_del_called == 1)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    printf("\n--- Test 2: NULL node ---\n");
    g_del_called = 0;
    
    printf("  Calling ft_lstdelone(NULL, del_content)...\n");
    ft_lstdelone(NULL, del_content);
    printf("  'del' function called: %s\n", g_del_called ? "Yes" : "No");

    if (g_del_called == 0)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    printf("\n--- Test 3: NULL del function ---\n");
    g_del_called = 0;
    content = new_int(99);
    node = ft_lstnew(content);
    
    printf("  Node: %p, Content: %p\n", (void *)node, (void *)content);
    printf("  Calling ft_lstdelone(node, NULL)...\n");
    ft_lstdelone(node, NULL);
    printf("  'del' function called: %s\n", g_del_called ? "Yes" : "No");
    
    if (g_del_called == 0)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    
    free(content);
    free(node);

    printf("\n--- End of tests ---\n");
    return (0);
}
*/