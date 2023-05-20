/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:26:22 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/20 17:44:39 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*newnode;
	t_list	*newlst;

	if (!lst)
		return (NULL);
	newlst = NULL;
	temp = lst;
	while (temp)
	{
		newnode = ft_lstnew(f(temp->content));
		if (head)
			ft_lstadd_back(&newlst, newnode);
		else
			ft_lstclear(&newnode, del);
		temp = temp->next;
	}
}
