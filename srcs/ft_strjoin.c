/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:12:49 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/09 16:25:40 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		t_len;
	char	*newstr;
	int		counter;
	int		i;

	i = 0;
	counter = 0;
	t_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	newstr = malloc(t_len + 1);
	if (newstr == 0)
		return (NULL);
	while (counter <= (int)ft_strlen(s1))
	{
		newstr[counter] = s1[counter];
		counter++;
	}
	while (counter <= t_len)
	{
		newstr[counter] = s2[i];
		counter++;
		i++;
	}
	newstr[counter] = '\0';
	return (newstr);
}
