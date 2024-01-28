#include "libfpp.h"

void	draw_line90d(t_window *win, t_vector stt, 
				t_direction direction, int thickness)
{
	int	i;
	int	j;

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
			j = 0;
			while (j++ < thickness)
			{
					draw_pixel(win, stt.x + j, stt.y + i, stt.color);
					draw_pixel(win, stt.x - j, stt.y + i, stt.color);
			}
		}
	}
	else if (direction == SOUTH)
			while (draw_pixel(win, stt.x, stt.y + i--, stt.color))
					;
	else if (direction == EAST)
			while (draw_pixel(win, stt.x + i--, stt.y, stt.color))
					;
	else if (direction == WEAST)
			while (draw_pixel(win, stt.x + i++, stt.y, stt.color))
					;
}
