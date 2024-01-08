/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stck_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:16:29 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/07 16:53:41 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	stck_swap(t_stack *stack, int print)
{
	int	temp;

	if (!stack || !stack->top || !stack->top->next)
		return (0);
	temp = stack->top->next->as_int;
	stack->top->next->as_int = stack->top->as_int;
	stack->top->as_int = temp;
	if (print)
		fp_printf("s%c\n", stack->id);
	return (1);
}
