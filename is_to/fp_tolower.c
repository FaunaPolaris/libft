/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:29:56 by fpolaris          #+#    #+#             */
/*   Updated: 2023/04/26 09:34:47 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fp_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	return (c);
}