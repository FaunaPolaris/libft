/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:01:56 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/09 11:42:18 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	printf("%s\n", str);
	while (str[i] != c && str[i])
	{
		i++;
		printf("character:%c\n", str[i]);
	}
	if (str[i] == c)
		return (&str[i]);
	return (0);
}
