/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_atox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:30:00 by fpolaris          #+#    #+#             */
/*   Updated: 2023/09/14 12:32:05 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "polarium.h"

unsigned int	conv_atox(const char *nptr)
{
	int			power;
	int			i;
	unsigned int	output;

	if (!s)
		return (0xFFFFFF);
	output = 0;
	if (s[0] != '0' || s[1] != 'x')
		return (output);
	i = 1;
	power = str_len(s) - 3;
	while (s[++i])
	{
		if (is_digit(s[i]))
			output += (s[i] - 48) * bc_pow(16, power);
		if (is_upper(s[i]))
			output += (s[i] - 55) * bc_pow(16, power);
		else
			output += (s[i] - 87) * bc_pow(16, power);
		power--;
	}
	return (output);
}
