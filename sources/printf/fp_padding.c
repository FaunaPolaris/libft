/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:05:19 by fpolaris          #+#    #+#             */
/*   Updated: 2023/08/21 11:35:25 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

static size_t	fp_flag_len(va_list args, char type)
{
	size_t		output;
	char	*aux;

	output = 1;
	if (type == 'i' || type == 'd')
	{
		aux = conv_itoa(va_arg(args, int));
		output = str_len(aux);
		free(aux);
	}
	else if (type == 's')
		output = str_len(va_arg(args, char *));
	else if (type == 'x' || type == 'X' || type == 'u')
	{
		aux = conv_itoa_base(va_arg(args, int), 16);
		output = str_len(aux);
		free(aux);
	}
	else if (type == 'p')
		output = (size_t)void_plen(va_arg(args, void *));
	return (output);
}

int	fp_fill_left(char *flags, va_list args, char fill)
{
	int		width;
	int		characters;
	int		i;

	i = 0;
	width = 0;
	while (is_digit(flags[i]))
		i++;
	characters = fp_convert(flags[i], args);
	width = conv_atoi(&flags[2]);
	while (characters < width)
	{
		put_char(fill, 1);
		characters++;
	}
	return (characters);
}

int	fp_fill_right(char *flags, va_list args, char fill)
{
	va_list		temp;
	int		i;
	int		width;
	size_t	len;

	i = 0;
	va_copy(temp, args);
	while (!is_alpha(flags[i]))
		i++;
	len = fp_flag_len(temp, flags[i]);
	va_end(temp);
	width = conv_atoi(&flags[1]);
	if ((int)len > width)
	{
		fp_convert(flags[i], args);
		return (len);
	}
	while ((int)len < width)
	{
		put_char(fill, 1);
		len++;
	}
	fp_convert(flags[i], args);
	return (len);
}

