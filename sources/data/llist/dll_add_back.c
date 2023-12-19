/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll_add_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:16:52 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/04 15:16:53 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	dll_add_back(t_dllist *head, void *value)
{
	head = dll_find_back(head);
	head->next = dll_node_new(value);
	if (!head->next)
		return (0);
	head->next->prev = head;
	return (1);
}
