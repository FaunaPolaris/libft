<<<<<<< HEAD
#include "libft.h"

char	*fp_strnxt(const char *str, int c)
{
	int	i;

	if (!str)
		return (NULL);
	i = -1;
	while (str[++i] && str[i] != (char)c)
		;
	if (str[++i])
		return (&str[i]);
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_strnxt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:01:56 by fpolaris          #+#    #+#             */
/*   Updated: 2023/09/14 09:21:40 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fp_strnxt(const char *s, int c)
{
	int	i;

	i = -1;
	if (!s)
		return (NULL);
	while (s[++i] && s[i] != (char) c)
		;
	if (s[i] && s[i + 1] && s[i] == (char)c)
		return ((char *)&s[i + 1]);
>>>>>>> refs/remotes/origin/main
	return (NULL);
}
