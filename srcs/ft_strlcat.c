/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:29:20 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/14 11:52:03 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;

	i = 0;
	d_len = ft_strlen(dst);
	while (src[i] && d_len + 1 < size)
	{
		dst[d_len + i] = src[i];
		i++;
		d_len++;
	}
	dst[d_len + 1] = '\0';
	if (size < ft_strlen(dst))
		return (size + ft_strlen(src));
	return (ft_strlen(dst) + ft_strlen(src));
}
