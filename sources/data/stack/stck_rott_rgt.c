/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stck_rott_rgt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:43:03 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/06 16:43:04 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	stck_rott_rgt(t_stack *stack, int print)
{
	if (!stack->top || !stack->bot)
		return (0);
	if (stack->top == stack->bot)
		return (0);
	else
	{
		stack->bot->next = stack->top;
		stack->top->prev = stack->bot;
		stack->top = stack->bot;
		stack->bot->prev->next = NULL;
		stack->bot = stack->bot->prev;
		stack->top->prev = NULL;
	}
	if (print)
		fp_printf("rr%c\n", stack->id);
	return (1);
}
