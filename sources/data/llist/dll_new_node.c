/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll_new_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:16:22 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/04 14:16:23 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

t_dllist	*dll_node_new(void *value)
{
	t_dllist	*output;

	output = (t_dllist *)mem_calloc(1, sizeof(t_dllist));
	if (!output)
		return (NULL);
	output->as_int = conv_atoi((char *)value);
	output->next = NULL;
	output->prev = NULL;
	return (output);
}
