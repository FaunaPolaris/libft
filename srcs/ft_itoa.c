/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:23:08 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/11 17:52:46 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*iterate(int n, int a, char *cnv)
{
	int	temp;

	temp = 0;
	temp = n % 10;
	if (n > 10)
	{
		iterate(n / 10, a - 1, cnv);
	}
	else
	{
		if (a == 1)
			cnv[0] = '-';
	}
	cnv[a] = temp + 48;
	return (cnv);
}

char	*ft_itoa(int n)
{
	int		temp;
	int		a;
	char	*cnv;

	a = 0;
	if (n < 0)
	{
		a++;
		n *= -1;
	}
	temp = n;
	while (temp > 0)
	{
		a++;
		temp = temp / 10;
	}
	if (n == 0)
		a = 1;
	cnv = (char *)malloc(sizeof(char) * (a + 1));
	if (cnv == 0)
		return (NULL);
	cnv[a] = '\0';
	cnv = iterate(n, a - 1, cnv);
	return (cnv);
}
