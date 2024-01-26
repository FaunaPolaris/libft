/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_applym3d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:56:46 by fpolaris          #+#    #+#             */
/*   Updated: 2023/09/08 19:19:15 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

t_vector	mtx_apply(const t_vector vector, const t_matrix m)
{
	t_vector	output;
	int			x;
	int			y;
	int			z;

	x = vector.x;
	y = vector.y;
	z = vector.z;
	output.x = (x * (m.elem)[0][0]) + (y * (m.elem)[0][1]) +
				(z * (m.elem)[0][2]);
	output.y = (x * (m.elem)[1][0]) + (y * (m.elem)[1][1]) +
				(z * (m.elem)[1][2]);
	output.z = (x * (m.elem)[2][0]) + (y * (m.elem)[2][1]) +
				(z * (m.elem)[2][2]);
	return (output);
}
