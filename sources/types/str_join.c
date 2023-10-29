/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:12:49 by fpolaris          #+#    #+#             */
/*   Updated: 2023/08/23 16:36:47 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "polarium.h"

char	*str_join(char const *s1, char const *s2, int flag)
{
	char	*newstr;

	newstr = (char *)mem_calloc(str_len(s1) + str_len(s2) + 1,
			sizeof(char));
	if (!newstr)
		return (NULL);
	mem_copy((void *)newstr, s1, str_len(s1) + 1);
	mem_copy((void *)&newstr[str_len(s1)], s2, str_len(s2) + 1);
	if (flag > 0)
		free((char *)s1);
	if (flag > 1)
		free((char *)s2);
	return (newstr);
}
