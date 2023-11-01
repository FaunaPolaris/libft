/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:42:43 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/23 10:19:22 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

void	*mem_calloc(size_t nmemb, size_t size)
{
	void	*ret;
	int		over;

	over = nmemb * size;
	if (over != 0 && over / size != nmemb)
		return (NULL);
	ret = (void *)malloc(nmemb * size);
	if (ret == NULL)
		return (NULL);
	mem_set(ret, 0, (nmemb * size));
	return (ret);
}
