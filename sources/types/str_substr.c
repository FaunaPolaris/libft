/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:58:06 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/23 11:05:15 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*str_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = str_len(s);
	if (start > s_len)
		return (str_dup(""));
	if (s_len - start >= len)
		subs = (char *)mem_calloc(len + 1, sizeof(char));
	else
		subs = (char *)mem_calloc(s_len - start + 1, sizeof(char));
	if (!subs)
		return (NULL);
	str_lcpy(subs, (s + start), (len + 1));
	return (subs);
}
