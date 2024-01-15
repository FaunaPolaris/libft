/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll_rmv_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:55:42 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/04 14:55:44 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

void	dll_clear(t_dllist **head)
{
	t_dllist	*old;

	if (!*head)
		return ;
	while (*head)
	{
		old = *head;
		*head = (*head)->next;
		free(old->as_str);
		free(old);
	}
	*head = NULL;
}
