/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:10:17 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/23 10:36:09 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	str_ncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = -1;
	if (n == 0)
		return (0);
	while (str1[++i] && str2[i] && str1[i] == str2[i] && i < n - 1)
		;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
