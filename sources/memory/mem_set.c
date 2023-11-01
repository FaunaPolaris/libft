/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:26:07 by fpolaris          #+#    #+#             */
/*   Updated: 2023/04/27 17:02:31 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

void	*mem_set(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	i = -1;
	p = (char *)s;
	while (++i < n)
		p[i] = (char)c;
	return (s);
}