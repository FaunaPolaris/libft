/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll_add_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:21:21 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/04 15:21:22 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	dll_add_frnt(t_dllist **head, char *value)
{
	if (!head[0])
	{
		head[0] = dll_node_new(value);
		return (TRUE);
	}
	head[0]->prev = dll_node_new(value);
	if (!head[0]->prev)
		return (FALSE);
	head[0]->prev->next = head[0];
	head[0] = head[0]->prev;
	return (TRUE);
}
