/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:20:36 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/19 16:37:08 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

char	*str_dup(const char *s)
{
	size_t	len;
	char	*news;

	len = str_len((char *)s);
	news = (char *)mem_calloc(len + 1, sizeof(char));
	if (!news)
		return (NULL);
	mem_cpy(news, s, len);
	return (news);
}
