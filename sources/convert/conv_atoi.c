/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:43:49 by fpolaris          #+#    #+#             */
/*   Updated: 2023/06/24 19:19:54 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "polarium.h"

int	conv_atoi(const char *nptr)
{
	char	neg;
	int		i;
	int		res;

	if (!nptr)
		return (0);
	i = 0;
	neg = 1;
	res = 0;
	while (is_space(nptr[i]))
		i++;
	if (*(nptr + i) == '-')
		neg = -1;
	if (*(nptr + i) == '-' || *(nptr + i) == '+')
		i++;
	while (*(nptr + i) && *(nptr + i) >= '0' && *(nptr + i) <= '9')
		res = res * 10 + (*(nptr + i++) - '0');
	return (res * neg);
}
