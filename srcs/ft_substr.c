/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:58:06 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/19 17:05:01 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start >= len)
		subs = (char *)malloc(sizeof(char) * (len + 1));
	else
		subs = (char *)malloc(sizeof(char) * ((ft_strlen(s) - start) + 1));
	if (!subs)
		return (NULL);
	ft_strlcpy(subs, (s + start), (len + 1));
	return (subs);
}
