#include "libfpp.h"

static void	st_draw_horizontal_lines(t_window *win, int width);
static void	st_draw_vertical_lines(t_window *win, int height);

void	draw_cartesian_table(t_window *win, int height, int width)
{
	st_draw_vertical_lines(win, height);
	st_draw_horizontal_lines(win, width);
	draw_line90d(win, (t_vector){height * .5, 0, 0, CARMINE}, WEAST, 0);
	draw_line90d(win, (t_vector){0, width * .5, 0, CARMINE}, NORTH, 0);
	draw_update(win);
}

static void	st_draw_vertical_lines(t_window *win, int height)
{
		int	i = 0;

	while (i < height * .5)
	{
		draw_line90d(win, (t_vector){(height * .5) + i, 0,
						0, AZULAO}, WEAST, 0); 
		i += 25;
	}
	i = 0;
	while (i < height * .5)
	{
		draw_line90d(win, (t_vector){(height * .5) - i, 0,
						0, AZULAO}, WEAST, 0); 
		i += 25;
	}
}

static void	st_draw_horizontal_lines(t_window *win, int width)
{
		int	i = 0;

	while (i < width * .5)
	{
		draw_line90d(win, (t_vector){0, (width * .5) + i,
						0, AZULAO}, NORTH, 0); 
		i += 25;
	}
	i = 0;
	while (i < width * .5)
	{
		draw_line90d(win, (t_vector){0, (width * .5) - i,
						0, AZULAO}, NORTH, 0); 
		i += 25;
	}
}
