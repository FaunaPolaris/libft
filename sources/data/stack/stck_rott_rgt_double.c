/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stck_rott_rgt_double.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:28:13 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/06 17:28:14 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	stck_rott_rgt_double(t_stack *stack_a, t_stack *stack_b)
{
	stck_rott_rgt(stack_a, 0);
	stck_rott_rgt(stack_b, 0);
	put_endl("rrr", 1);
	return (1);
}
