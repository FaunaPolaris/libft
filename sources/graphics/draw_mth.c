#include "libfpp.h"

int	draw_mth(t_window *win, t_vector stt, int (*mth)(int))
{
	double	t = -100.0;
	int		x;
	int		y;

	while (t < 10000)
	{
		x = (stt.x + t) * .1;
		y = (mth(stt.y + t));
		draw_pixel(win, x, y, WHITE);
		t += 1;
	}
	return (TRUE);
}
