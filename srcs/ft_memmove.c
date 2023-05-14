/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:55:11 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/14 10:50:50 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (s < d && s + n > d)
	{
		i = n;
		while (i--)
			d[i] = s[i];
	}
	else
	{
		while (n > 0)
		{
			d[i] = s[i];
			i++;
			n--;
		}
	}
	return (dest);
}
