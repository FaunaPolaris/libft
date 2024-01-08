/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stck_push_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:43:28 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/19 14:43:28 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	stck_push_all(t_stack *from, t_stack *to)
{
	int	size;

	if (!from || !from->top || !to)
		return (0);
	size = dll_size(from->top);
	while (size--)
		stck_push(from, to);
	return (1);
}
