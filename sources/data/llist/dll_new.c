/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll_new_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:07:05 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/04 15:07:06 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

t_dllist	*dll_new(char **values)
{
	int		i;
	t_dllist	*head;

	i = 0;
	if (!values || !values[0] || *values[0] == '\0')
		return (NULL);
	head = (t_dllist *)mem_calloc(1, sizeof(t_dllist));
	if (!head)
		return (NULL);
	head->as_int = conv_atoi(values[0]);
	while (values[++i])
	{
		if (!dll_add_back(head, values[i]))
		{
			dll_clear(&head);
			return (NULL);
		}
	}
	return (head);
}
