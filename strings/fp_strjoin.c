/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:12:49 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/23 10:52:08 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fp_strjoin(char const *s1, char const *s2)
{
	char	*newstr;

	newstr = (char *)malloc((fp_strlen(s1) + fp_strlen(s2)) + 1 * sizeof(char));
	if (!newstr)
		return (NULL);
	fp_memcpy((void *)newstr, s1, fp_strlen(s1) + 1);
	fp_memcpy((void *)&newstr[fp_strlen(s1)], s2, fp_strlen(s2) + 1);
	return (newstr);
}
