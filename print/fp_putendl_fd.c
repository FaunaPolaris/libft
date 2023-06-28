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

#include "libft.h"

void	fp_putendl_fd(char *s, int fd)
{
	fp_putstr_fd(s, fd);
	fp_putchar_fd('\n', fd);
}
