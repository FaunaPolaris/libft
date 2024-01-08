/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stck_rott_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:38:04 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/06 16:38:05 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	stck_rott_lft(t_stack *stack, int print)
{
	if (!stack->bot || !stack->top)
		return (0);
	if (stack->top == stack->bot)
		return (0);
	else
	{
		stack->top->prev = stack->bot;
		stack->bot->next = stack->top;
		stack->top = stack->top->next;
		stack->top->prev = NULL;
		stack->bot = stack->bot->next;
		stack->bot->next = NULL;
	}
	if (print)
		fp_printf("r%c\n", stack->id);
	return (1);
}
