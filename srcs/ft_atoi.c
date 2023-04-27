/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:43:49 by fpolaris          #+#    #+#             */
/*   Updated: 2023/04/27 15:55:53 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	char	neg;
	int		res;
	char	stop;

	i = 0;
	neg = 1;
	res = 0;
	stop = 0;
	while ((nptr[i] == ' ') || (nptr[i] == '+') || (nptr[i] == '-'))
	{
		i++;
		if (nptr[i - 1] == '-')
			neg = -1;
	}
	while (ft_isdigit(nptr[i++]))
	{
		res = res * 10 + nptr[i - 1] - 48;
		stop++;
		if (stop > 19)
			return (-1);
	}
	return (res * neg);
}
