/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:01:33 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/20 18:14:51 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

char	*str_rfind_char(const char *s, int c)
{
	size_t			end;
	unsigned char	target;

	target = (unsigned char)c;
	end = str_len(s);
	if (target == '\0')
		return ((char *)&s[end]);
	while (--end > 0)
		if (s[end] == target)
			return ((char *)&s[end]);
	return (NULL);
}
