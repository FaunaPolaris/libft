/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:01:31 by fpolaris          #+#    #+#             */
/*   Updated: 2023/06/27 15:47:32 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	fp_putnbr_base(unsigned int nb, char *base_chars)
{
	unsigned int	base_size;
	unsigned int	output;

	base_size = (unsigned int)ft_strlen(base_chars);
	if ((nb / base_size) > 0)
		output = fp_putnbr_base(nb / base_size, base_chars);
	ft_putchar_fd(base_chars[nb % base_size], 1);
	return (ft_strlen(fp_itoa_base(nb, base_size)));
}
