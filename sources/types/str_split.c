/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:41:01 by fpolaris          #+#    #+#             */
/*   Updated: 2023/09/13 10:17:42 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "polarium.h"

char	**str_split(const char *str, int c)
{
	char	**output;
	char		*p;
	int			grid_size;
	int			i;

	if (!str)
		return (NULL);
	grid_size = char_count(str, c) + 1;
	if (str[0] == c)
		grid_size--;
	if (str[str_len(str) - 1] == c)
		grid_size--;
	output = (char **)mem_calloc(grid_size + 1, sizeof(char *));
	if (!output)
		return (NULL);
	p = (char *)str;
	i = -1;
	while (++i < grid_size)
	{
		while (p && *p == c)
			p++;
		output[i] = str_copy_upto(p, c);
		p = str_search(p, c);
	}
	return (output);
}
