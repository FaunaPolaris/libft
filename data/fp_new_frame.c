/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_new_frame.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:54:34 by fpolaris          #+#    #+#             */
/*   Updated: 2023/09/01 20:26:33 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraph.h"

static void	st_relate_center(t_wireframe **wrfrm, int width, int height);
static void	st_relate_sides(t_wireframe **wrfrm, int width, int height);
static void	st_fill_positions(t_wireframe **wrfrm, int width, int height);

t_wireframe	**fp_frmnew(int width, int height)
{
	t_wireframe	**wrfrm;
	int		i;

	wrfrm = (t_wireframe **)fp_calloc(height + 1, sizeof(t_wireframe *));
	i = 0;
	while (i < height)
	{
		wrfrm[i] = (t_wireframe *)fp_calloc(width + 1, sizeof(t_wireframe));
		i++;
	}
	st_relate_center(wrfrm, width, height);
	st_relate_sides(wrfrm, width, height);
	wrfrm[0][0]->width = width;
	wrfrm[0][0]->height = height;
	return (wrfrm);
}

void	fp_frmfre(t_wireframe **wrfrm)
{
	int	y;
	int	width;

	width = wrfrm[0][0].width;
	y = 0;
	while (y < width)
	{
		free(wrfrm[y]);
		x++;
	}
	free(wrfrm);
}

static void	st_relate_center(t_wireframe **wrfrm, int width, int height)
{
	int	x;
	int	y;

	y = -1;
	while (++y < height)
	{
		x = -1;
		while (++x < width)
		{
			if (x != width - 1)
				wrfrm[x][y].xplus = &wrfrm[x + 1][y];
			if (x != 0)
				wrfrm[x][y].xmins = &wrfrm[x - 1][y];
			if (y != height - 1)
				wrfrm[x][y].yplus = &wrfrm[x][y + 1];
			if (y != 0)
				wrfrm[x][y].ymins = &wrfrm[x][y - 1];
		}
	}
}

static void	st_relate_sides(t_wireframe **wrfrm, int width, int height)
{
	int	i;

	i = 0;
	while (i < width)
	{
		wrfrm[0][i].xmins = &wrfrm[width - 1][i];
		wrfrm[height - 1][i].xplus = &wrfrm[0][i];
		i++;
	}
	i = 0;
	while (i < height)
	{
		wrfrm[i][0].ymins = &wrfrm[i][height - 1];
		wrfrm[i][width - 1].yplus = &wrfrm[i][0];
		i++;
	}
}
