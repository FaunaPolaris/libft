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

#include "libft.h"

int	fp_convert(char c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'i' || c == 'd')
		i = fp_putnbr_base(va_arg(args, int), 10, 0);
	else if (c == 's')
		i = fp_putstr_and_len(va_arg(args, char *), 1);
	else if (c == 'c')
	{
		fp_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (c == 'x')
		i = fp_putnbr_base(va_arg(args, unsigned int), 16, 0);
	else if (c == 'X')
		i = fp_putnbr_base(va_arg(args, unsigned int), 16, 1);
	else if (c == 'u')
		i = fp_putnbr_base(va_arg(args, unsigned int), 10, 0);
	else if (c == 'p')
		i = fp_putpointer(va_arg(args, void *));
	return (i);
}
