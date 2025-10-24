/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:23:28 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/24 10:32:26 by cel-hajj         ###   ########.fr       */
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
		(*del)(t->content);
		free(t);
		t = nxt;
	}
	*lst = NULL;
}
