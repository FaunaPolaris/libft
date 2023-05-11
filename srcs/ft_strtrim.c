/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:06:02 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/10 18:29:03 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	a;
	char	*news;

	i = -1;
	a = 0;
	while (i++ < ft_strlen(set))
		;
	while (a++ < ft_strlen(s) - ft_strlen(set))
		;
	news = malloc(a);
	if (a == 0)
		return (NULL);
	i = -1;
	while (i++ < ft_strlen(set))
		;
	i -= 1;
	while (i++ != (a - ft_strlen(set) - 1))
		news[i] = s[i];
	news[i] = '\0';
	return (news);
}
