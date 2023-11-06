/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:18:29 by fpolaris          #+#    #+#             */
/*   Updated: 2023/08/21 11:39:17 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	fp_convert(char c, va_list args)
{
	if (c == 'i' || c == 'd')
		return (put_nbr(va_arg(args, int), 1));
	else if (c == 's')
		return (put_str(va_arg(args, char *), 1));
	else if (c == 'c')
		return (put_char(va_arg(args, int), 1));
	else if (c == 'x')
		return (put_nbr_base(va_arg(args, unsigned int), 16, 0));
	else if (c == 'X')
		return (put_nbr_base(va_arg(args, unsigned int), 16, 1));
	else if (c == 'u')
		return (put_nbr_base(va_arg(args, unsigned int), 10, 0));
	else if (c == 'p')
		return (put_pointer(va_arg(args, void *)));
	return (0);
}
