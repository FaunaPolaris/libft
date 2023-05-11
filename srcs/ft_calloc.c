/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:42:43 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/10 16:51:07 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	if (size == 0)
		return (NULL);
	ret = malloc(nmemb * size);
	if (ret == 0)
		return (NULL);
	ft_memset(ret, nmemb, 0);
	return (ret);
}
