/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:05:41 by fpolaris          #+#    #+#             */
/*   Updated: 2023/04/27 17:28:09 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int		i;
	char	*after_c;

	i = 0;
	while (i < n)
	{
		if (src[i] != (char)c)
			dest[i] = src[i];
		else
		{
			after_c = &src[i + 1];
			dest[i + 1] = '\0';
			break ;
		}
		i++;
	}
	dest[i + 1] = '\0';
	return (after_c);
}
