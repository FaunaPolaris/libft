/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 13:16:35 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/22 11:57:27 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "polarium.h"

static int	neg(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

static void	recurse(int nb, int len, char *news)
{
	news[len] = neg(n % 10) + 48;
	if (nb > 9 || nb < -9)
		recurse(n / 10, len - 1, news);
}

char	*conv_itoa(int nb)
{
	int		len;
	int		temp;
	char	*news;

	temp = nb;
	len = 1;
	while (temp >= 10 || temp <= -10)
	{
		temp *= .1;
		len++;
	}
	if (nb < 0)
		len++;
	news = (char *)mem_calloc(len + 1, sizeof(char));
	if (!news)
		return (NULL);
	if (nb < 0)
		news[0] = '-';
	recurse(nb, len - 1, news);
	return (news);
}
