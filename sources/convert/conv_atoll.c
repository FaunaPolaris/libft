/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:49:19 by fpolaris          #+#    #+#             */
/*   Updated: 2023/10/19 14:49:20 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

long long int	fp_atoll(const char *nptr)
{
	int					i;
	char				neg;
	long long int		res;

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
