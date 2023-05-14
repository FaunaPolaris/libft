/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:29:20 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/13 20:37:36 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	i = 0;
	x = ft_strlen(dst);
	while (src[i] && ft_strlen(dst) + 1 < size)
	{
		dst[ft_strlen(dst) + i] = src[i];
		i++;
		x++;
	}
	dst[x] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
