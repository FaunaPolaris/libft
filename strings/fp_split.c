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

char	**fp_split(const char *str, int c)
{
	char	**output;
	char		*p;
	int			grid_size;
	int			i;

	if (!str)
		return (NULL);
	grid_size = fp_chrcnt(str, c) + 1;
	output = (char **)fp_calloc(grid_size + 1, sizeof(char *));
	if (!output)
		return (NULL);
	p = (char *)str;
	i = -1;
	while (++i < grid_size)
	{
		output[i] = fp_strcpyto(p, c);
		p = fp_strchr(p, c);
		p++;
	}
	return (output);
}
