#include "libfpp.h"

void	draw_helix(t_window *win, t_vector stt, int scale)
{
	double			t = 0.1;
	t_vector		v;
	static t_vector	w;

	w.color = -1;
	while (t < 100)
	{
		v.x = ((cos(t * g_mtx->convert_to_radian) * scale));
		v.y = ((sin(t * g_mtx->convert_to_radian) * scale));
		v.z = t * stt.z;
		v = vec_isometry((t_vector){v.x, v.y, v.z, stt.color});
		v.x += stt.x;
		v.y += stt.y;
		if (w.color == -1)
				;
		else
			draw_line(win, v, w);
		w = v;
		t += PRECISION;
	}
	draw_update(win);
}
