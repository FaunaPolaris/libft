/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:21:10 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/23 10:39:45 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	is_print(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}
