/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:43:49 by fpolaris          #+#    #+#             */
/*   Updated: 2023/04/27 13:55:46 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	while (nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
	{
		neg = -1;
		i++;
	}
	if (ft_isdigit(nptr[i]))
	{
		while (ft_isdigit(nptr[i]) && res < 2147483647 && res > -2147483648)
		{
			res = res * 10 + nptr[i] - 48;
			i++;
		}
		return (res);
	}
	return (0);
}
