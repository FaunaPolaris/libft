/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:20:36 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/19 16:37:08 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*news;

	len = ft_strlen((char *)s);
	news = (char *)malloc(sizeof(char) * (len + 1));
	if (!news)
		return (NULL);
	ft_memcpy(news, s, len);
	news[len] = '\0';
	return (news);
}
