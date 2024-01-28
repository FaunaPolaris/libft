#include "libfpp.h"

int	draw_mth(t_window *win, t_vector stt, int (*mth)(int))
{
	double	t = 0;
	int		x;
	int		y;

	while (t < win->width)
	{
		x = (stt.x + t);
		y = (stt.y + mth(t));
		draw_pixel(win, x, y, stt.color);
		t += .1;
	}
	return (TRUE);
}
