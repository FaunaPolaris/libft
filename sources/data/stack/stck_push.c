/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stck_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:27:50 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/09 18:01:56 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

static void	st_line_cutter(t_stack **receiver, t_dllist **donatad);

int	stck_push(t_stack *donor, t_stack *receiver)
{
	t_dllist	*donated;

	if (!donor || !receiver || !donor->top)
		return (0);
	donated = donor->top;
	if (donor->top->next)
	{
		donor->top = donor->top->next;
		donor->top->prev = NULL;
	}
	else
		donor->top = NULL;
	if (!receiver->top)
	{
		receiver->top = donated;
		receiver->bot = donated;
		donated->next = NULL;
	}
	else
		st_line_cutter(&receiver, &donated);
	fp_printf("p%c\n", receiver->id);
	return (1);
}

static void	st_line_cutter(t_stack **receiver, t_dllist **donated)
{
	(*receiver)->top->prev = *donated;
	(*donated)->next = (*receiver)->top;
	(*receiver)->top = *donated;
}
