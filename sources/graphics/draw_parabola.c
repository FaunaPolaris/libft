#include "libfpp.h"

int	draw_parabola(t_window *win, t_vector stt, int lenght)
{
	double		t = -lenght;
	int		x;
	int		y;

	while (t < lenght)
	{
			x = (stt.x + t);
			y = (pow(stt.y + t, 2)) * .1;
			draw_pixel(win, x, y, WHITE);
			t += PRECISION;
	}
	return (TRUE);
}

// formula y = x^2
