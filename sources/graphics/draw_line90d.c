#include "libfpp.h"

static void	st_apply_thickness_east_west(t_window *win, t_vector stt,
				int i, int thickness);
static void	st_apply_thickness_north_south(t_window *win, t_vector stt,
				int i, int thickness);

void	draw_line90d(t_window *win, t_vector stt, 
				t_direction direction, int thickness)
{
	int	i;

	i = 0;
	if (direction > 3)
	{
		printf ("invalid direction for a 90 degree line\n");
		return ;
	}
	if (direction == NORTH)
	{
		while (draw_pixel(win, stt.x, stt.y + i++, stt.color))
		{
			st_apply_thickness_north_south(win, stt, i, thickness);
		}
	}
	else if (direction == SOUTH)
	{
		while (draw_pixel(win, stt.x, stt.y + i--, stt.color))
		{
			st_apply_thickness_north_south(win, stt, i, thickness);
		}
	}
	else if (direction == EAST)
	{
		while (draw_pixel(win, stt.x + i--, stt.y, stt.color))
		{
			st_apply_thickness_east_west(win, stt, i, thickness);
		}
	}
	else if (direction == WEAST)
	{
		while (draw_pixel(win, stt.x + i++, stt.y, stt.color))
		{
			st_apply_thickness_east_west(win, stt, i, thickness);
		}
	}
}
static void	st_apply_thickness_north_south(t_window *win, t_vector stt,
				int i, int thickness)
{
	int	j;

	j = 0;
	while (j++ < thickness)
	{
		draw_pixel(win, stt.x + j, stt.y + i, stt.color);
		draw_pixel(win, stt.x - j, stt.y + i, stt.color);
	}
}

static void	st_apply_thickness_east_west(t_window *win, t_vector stt,
				int i, int thickness)
{
	int	j;

	j = 0;
	while (j++ < thickness)
	{
		draw_pixel(win, stt.x + i, stt.y + j, stt.color);
		draw_pixel(win, stt.x + i, stt.y - j, stt.color);
	}
}
