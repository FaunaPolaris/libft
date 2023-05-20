/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:01:33 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/19 12:37:43 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		end;
	unsigned char	target;

	target = (unsigned char)c;
	if (target == '\0')
		return ((char *)&s[ft_strlen(s)]);
	end = ft_strlen(s);
	while (end > 0)
	{
		if (s[end - 1] == target)
			return ((char *)&s[end - 1]);
		end--;
	}
	return (NULL);
}
