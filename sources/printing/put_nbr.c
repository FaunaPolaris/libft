/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_putnbr_and_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:03:41 by fpolaris          #+#    #+#             */
/*   Updated: 2023/06/27 10:53:53 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	put_nbr(int n, int fd)
{
	char	*temp;
	int		output;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n *= -1;
		put_char('-', fd);
	}
	if (n > 9)
	{
		put_nbr(n / 10, fd);
		put_nbr(n % 10, fd);
	}
	if (n <= 9)
		put_char(n + 48, fd);
	temp = conv_itoa(n);
	output = str_len(temp);
	free(temp);
	return (output);
}
