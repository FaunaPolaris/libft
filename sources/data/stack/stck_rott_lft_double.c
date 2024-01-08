/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stck_rott_lft_double.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:26:28 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/06 19:27:22 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	stck_rott_lft_double(t_stack *stack_a, t_stack *stack_b)
{
	stck_rott_lft(stack_a, 0);
	stck_rott_lft(stack_b, 0);
	put_endl("rr", 1);
	return (1);
}
