#include "libfpp.h"

int	draw_parabola(t_window *win, t_vector stt, int lenght)
{
	int		t = -1;
	int		x;
	int		y;

	while (t++ < lenght)
	{
			x = stt.x + t;
			y = pow(stt.y + t, 2);
			draw_pixel(win, x, y, stt.color);
	}
	return (TRUE);
}

// formula y = x^2
