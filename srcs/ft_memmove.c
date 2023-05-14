/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:55:11 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/13 18:13:37 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*news;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	news = (char *)malloc(ft_strlen(d));
	i = 0;
	while (i < n)
	{
		news[i] = s[i];
		d[i] = news[i];
		i++;
	}
	return (dest);
}
