/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stck_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:33:22 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/06 11:33:23 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

t_stack	*stck_new(char **values, char id)
{
	t_dllist	*list;
	t_stack		*output;

	output = (t_stack *)mem_calloc(1, sizeof(t_stack));
	if (!output)
		return (NULL);
	list = dll_new(values);
	output->id = id;
	output->top = list;
	if (list && list->next)
		output->bot = dll_find_back(list);
	else
		output->bot = NULL;
	return (output);
}

void	stck_rmv(t_stack *stack)
{
	if (!stack)
		return ;
	dll_clear(&stack->top);
	free(stack);
	stack = NULL;
}
