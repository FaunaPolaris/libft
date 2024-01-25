/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:06:13 by fpolaris          #+#    #+#             */
/*   Updated: 2023/09/13 10:40:40 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpp.h"

void	draw_line(t_window *win, t_vector point_a, t_vector point_b)
{
	double	t;
	int	x;
	int	y;
	int	hypo;
	int	i;

	i = -1;
	hypo = (int)(sqrt(pow(point_a.x - point_b.x, 2)) +
		pow(point_a.y - point_b.y, 2));
	while (++i < hypo)
	{
		t = (double)i / hypo;
		x = mth_ilerp(point_a.x, point_b.x, t);
		y = mth_ilerp(point_a.y, point_b.y, t);
		t = mth_lerpcolor(point_a.color, point_b.color, t);
		draw_pixel(win, x, y, t);
	}
}
