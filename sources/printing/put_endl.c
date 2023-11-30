/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:09:03 by fpolaris          #+#    #+#             */
/*   Updated: 2023/05/14 09:09:05 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

int	put_endl(char *s, int fd)
{
	int	output;

	output = put_str(s, fd);
	put_char('\n', fd);
	return (output + 1);
}