/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:01:31 by fpolaris          #+#    #+#             */
/*   Updated: 2023/06/23 20:35:03 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	fp_putnbr_base(int nb, char *base_chars)
{
	int	base_size;
	int	output;

	base_size = ft_strlen(base_chars);
	if (nb / base_size > 0)
		output = fp_putnbr_base(nb / base_size, base_chars);
	ft_putchar_fd(base_chars[nb % base_size], 1);
	return (ft_strlen(ft_itoa(nb)));
}
