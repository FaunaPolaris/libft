/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:19:35 by fpolaris          #+#    #+#             */
/*   Updated: 2023/04/26 11:29:19 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	is_alnum(int c)
{
	if (is_alpha(c))
		return (1);
	else if (is_digit(c))
		return (1);
	return (0);
}