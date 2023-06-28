/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:41:01 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/23 11:18:43 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**fp_count(char const *s, char c, int i)
{
	char	**subs;
	int		alloc;

	if (!s)
		return (NULL);
	alloc = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			alloc++;
		i++;
	}
	if (s[0] != c && s[0])
		alloc++;
	subs = (char **)fp_calloc(alloc, sizeof(char *));
	if (!subs)
		return (NULL);
	return (subs);
}

static int	fp_strchr_len(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**fp_split(char const *s, char c)
{
	int		i;
	int		str_count;
	char	**subs;

	i = 0;
	str_count = 0;
	subs = fp_count(s, c, 0);
	if (!s || !subs)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			subs[str_count] = fp_substr(s, i, fp_strchr_len(&s[i], c));
			if (!subs)
				return (NULL);
			str_count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (subs);
}
