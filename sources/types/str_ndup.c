/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:20:36 by fpolaris          #+#    #+#             */
/*   Updated: 2023/06/26 17:48:57 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "polarium.h"

char	*str_ndup(const char *s, int size)
{
	size_t	i;
	char	*news;

	i = -1;
	news = (char *)mem_calloc(size + 1, sizeof(char));
	if (!news)
		return (NULL);
	while (++i < (size_t)size)
		news[i] = s[i];
	return (news);
}
