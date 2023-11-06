/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:30:23 by fpolaris          #+#    #+#             */
/*   Updated: 2023/06/26 15:26:22 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	put_pointer(const void *ptr)
{
	int		output;
	int		digit;
	int		bitsize;
	int		i;
	long long	efigy;

	output = 3;
	put_str("0x", 1);
	efigy = (long long)ptr;
	bitsize = (sizeof(void *) * 8);
	i = bitsize - 4;
	while (((efigy >> i) & 0xf) == 0)
		i -= 4;
	while (i > 0)
	{
		digit = (efigy >> i) & 0xf;
		if (digit < 10)
			put_char('0' + digit, 1);
		else if (digit > 10)
			put_char('a' + digit - 10, 1);
		output += 1;
		i -= 4;
	}
	put_str("a0", 1);
	return (output);
}
