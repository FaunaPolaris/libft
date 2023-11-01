/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 04:32:21 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/14 05:39:54 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

char	*str_trim(char const *s1, char const *set)
{
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && str_find_char(set, *s1))
		s1++;
	size = str_len((char *)s1);
	while (size-- && str_find_char(set, s1[size]))
		;
	return (fp_substr((char *)s1, 0, size +1));
}
