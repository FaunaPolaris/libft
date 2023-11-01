/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:31:02 by fpolaris          #+#    #+#             */
/*   Updated: 2023/06/27 17:34:07 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*str_find_str(const char *source, const char *target, size_t len)
{
	size_t	i;
	size_t	tgt_len;

	i = 0;
	if (!source)
		return (NULL);
	if (target[i] == '\0')
		return ((char *)source);
	tgt_len = str_len(target);
	while (source[i++] && (i + tgt_len - 1) < len)
		if (!str_ncmp(&source[i], target, tgt_len))
			return ((char *)&source[i]);
	return (NULL);
}
