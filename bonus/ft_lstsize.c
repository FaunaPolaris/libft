/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 08:27:09 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/14 08:31:40 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst);
{
	int		i;
	t_list *head;

	head = lst;
	i = 0;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (size);
}
