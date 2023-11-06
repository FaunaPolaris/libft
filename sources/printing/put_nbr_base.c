/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:01:31 by fpolaris          #+#    #+#             */
/*   Updated: 2023/07/10 15:11:19 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	put_nbr_base(unsigned int nb, int base, int up)
{
	if ((nb / base) > 0)
		put_nbr_base(nb / base, base, up);
	nb %= base;
	if (nb < 10)
		put_char('0' + nb, 1);
	if (nb > 10 && up == 0)
		put_char('a' + nb - 10, 1);
	if (nb > 10 && up == 1)
		put_char('A' + nb - 10, 1);
	return (int_len_base(nb, base));
}
