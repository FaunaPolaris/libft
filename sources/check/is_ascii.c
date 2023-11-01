/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:53:36 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/23 11:01:16 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	is_ascii(int c)
{
	if (c > 127)
		return (0);
	if ((c & 0x80) == 0)
		return (1);
	return (0);
}
