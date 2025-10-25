/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:10:17 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/25 13:28:01 by cel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*el;
	void	*t;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		t = (*f)(lst->content);
		el = ft_lstnew(t);
		if (!el)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, el);
		lst = lst->next;
	}
	return (new);
}

/*
#include <stdio.h>

static int g_del_count = 0;

void *increment_content(void *content)
{
    if (!content)
        return (NULL);
    int *old_val_ptr = (int *)content;
    int *new_val_ptr = malloc(sizeof(int));
    if (new_val_ptr)
        *new_val_ptr = *old_val_ptr + 1;
    return (new_val_ptr);
}

void del_content(void *content)
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

void print_list_ints(t_list *lst)
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
    t_list *orig_list = NULL;
    t_list *new_list = NULL;
    t_list *node1, *node2;

    printf("--- Testing ft_lstmap ---\n\n");

    printf("--- Test 1: Normal operation (10, 20) -> (11, 21) ---\n");
    g_del_count = 0;
    node1 = ft_lstnew(new_int(10));
    node2 = ft_lstnew(new_int(20));
    ft_lstadd_back(&orig_list, node1);
    ft_lstadd_back(&orig_list, node2);
    
    printf("  Original list before: ");
    print_list_ints(orig_list);
    
    new_list = ft_lstmap(orig_list, increment_content, del_content);
    
    printf("  Original list after:  ");
    print_list_ints(orig_list);
    printf("  New list:             ");
    print_list_ints(new_list);
    printf("  'del' calls: %d\n", g_del_count);

    int val1 = -1, val2 = -1;
    if (new_list && new_list->content) val1 = *(int *)new_list->content;
    if (new_list && new_list->next && new_list->next->content)
		val2 = *(int *)new_list->next->content;

    if (new_list && val1 == 11 && val2 == 21 && g_del_count == 0)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    ft_lstclear(&orig_list, del_content);
    ft_lstclear(&new_list, del_content);

    printf("\n--- Test 2: NULL list ---\n");
    g_del_count = 0;
    orig_list = NULL;
    new_list = ft_lstmap(orig_list, increment_content, del_content);
    printf("  New list pointer: %p\n", (void *)new_list);
    printf("  'del' calls: %d\n", g_del_count);
    if (new_list == NULL && g_del_count == 0)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");

    printf("\n--- Test 3: NULL 'f' function ---\n");
    g_del_count = 0;
    orig_list = ft_lstnew(new_int(100));
    new_list = ft_lstmap(orig_list, NULL, del_content);
    printf("  New list pointer: %p\n", (void *)new_list);
    printf("  'del' calls: %d\n", g_del_count);
    if (new_list == NULL && g_del_count == 0)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    ft_lstclear(&orig_list, del_content);

    printf("\n--- Test 4: NULL 'del' function ---\n");
    g_del_count = 0;
    orig_list = ft_lstnew(new_int(200));
    new_list = ft_lstmap(orig_list, increment_content, NULL);
    printf("  New list pointer: %p\n", (void *)new_list);
    printf("  'del' calls: %d\n", g_del_count);
    if (new_list == NULL && g_del_count == 0)
        printf("  Result: \033[32m[OK]\033[0m\n");
    else
        printf("  Result: \033[31m[KO]\033[0m\n");
    ft_lstclear(&orig_list, del_content);
    
    printf("\n--- End of tests ---\n");
    return (0);
}
*/