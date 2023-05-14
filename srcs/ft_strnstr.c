/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:31:02 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/14 07:49:35 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_l(const char *big, const char *little)
{
	size_t	i;

	i = 0;
	while (little[i])
	{
		if (big[i] == little[i])
			i++;
		else
			return (0);
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i] && (i + ft_strlen(little) - 1) < len)
	{
		if (find_l(&big[i], little))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
