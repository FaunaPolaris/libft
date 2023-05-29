/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:12:49 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/23 10:52:08 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;

	newstr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1 * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_memcpy((void *)newstr, s1, ft_strlen(s1) + 1);
	ft_memcpy((void *)&newstr[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
	return (newstr);
}
