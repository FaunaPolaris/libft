/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:05:41 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/14 07:56:04 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	i = 0;
	if (!ft_strchr(src, c))
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char) c)
			return (&d[i + 1]);
	}
	return (NULL);
}
