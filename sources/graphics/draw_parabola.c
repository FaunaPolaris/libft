#include "libfpp.h"

int	draw_parabola(t_window *win, t_vector stt, int lenght)
{
	double		t = -lenght;
	int		x;
	int		y;

	while (t < lenght)
	{
			x = (stt.x + t);
			y = stt.y + (mth_pow2(t)) * .01;
			draw_pixel(win, x, y, WHITE);
			t += PRECISION;
	}
	return (TRUE);
}

// formula y = x^2
