/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:58:06 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/09 12:55:05 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*subs;

	i = 0;
	subs = malloc(len + 1);
	if (subs == 0)
		return (NULL);
	while (i < (int)len && s[start])
	{
		subs[i] = s[start];
		i++;
		start++;
		printf("%s\n", subs);
	}
	subs[i] = '\0';
	return (subs);
}
