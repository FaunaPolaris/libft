/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stck_highest_to_top.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:42:53 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/19 14:42:54 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	stck_highest_to_top(t_stack *stack)
{
	int	highest;
	int	i;

	highest = dll_highest(stack->top);
	i = 0;
	while (stack->top->as_int != highest)
	{
		if (dll_index(stack->top, highest)
			< (dll_size(stack->top) * .5) + 1)
			stck_rott_lft(stack, 1);
		else
			stck_rott_rgt(stack, 1);
		i++;
	}
	return (i);
}
