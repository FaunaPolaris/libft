/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:39:34 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/14 09:01:29 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

void	*mem_find(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = -1;
	str = (const unsigned char *)s;
	while (++i < n)
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
	return (NULL);
}
