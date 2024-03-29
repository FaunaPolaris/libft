/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 05:49:19 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/23 10:28:59 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

char	*str_mapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*news;

	news = fp_strdup(s);
	if (!news)
		return (NULL);
	i = -1;
	while (s[++i])
		news[i] = f(i, news[i]);
	return (news);
}
