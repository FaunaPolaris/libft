/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_cutstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:35:49 by fpolaris          #+#    #+#             */
/*   Updated: 2023/08/21 11:09:43 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	str_cut(char *str, int from, int size)
{
	size_t	len;
	char	*efigy;
	int		i;

	if (!str)
		return (-1);
	len = str_len(str);
	if (from >= (int)len)
		return (0);
	efigy = str;
	str = (char *)mem_calloc(size + 1, sizeof(char));
	i = -1;
	while (efigy[++i + from] && i < size)
		str[i] = efigy[i + from];
	free(efigy);
	return (1);
}
