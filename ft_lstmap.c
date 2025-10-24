/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-hajj <cel-hajj@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:10:17 by cel-hajj          #+#    #+#             */
/*   Updated: 2025/10/24 10:42:48 by cel-hajj         ###   ########.fr       */
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
