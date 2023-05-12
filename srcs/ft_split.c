/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:41:01 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/12 19:16:24 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_count(char const *s, char c, int i)
{
	char	**subs;
	int			alloc;

	alloc = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			alloc++;
		i++;
	}
	if (s[0] != c && s[0])
		alloc++;
	subs = (char **)malloc(sizeof(char *) * alloc);
	if (!subs)
		return (NULL);
	subs[alloc - 1] = 0;
	return (subs);
}

static int	ft_strchr_len(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}


char	**ft_split(char const *s, char c)
{
	int			i;
	int			str_count;
	char	**subs;

	i = 0;
	str_count = 0;
	subs = ft_count(s, c, 0);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			subs[str_count] = ft_substr(s, i, ft_strchr_len(&s[i], c));
			str_count++;
			while (s[i] != c)
				i++;
		}
	}
	return (subs);
}
