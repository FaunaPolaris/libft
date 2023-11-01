/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:29:20 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/14 12:42:43 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

size_t	str_lcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	i = -1;
	d_len = str_len(dst);
	s_len = str_len(src); 
	if (size < d_len)
		return (size + s_len);
	while (src[++i] && d_len + i + 1 < size)
		dst[d_len + i] = src[i];
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
