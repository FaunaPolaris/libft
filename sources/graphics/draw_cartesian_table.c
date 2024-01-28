#include "libfpp.h"

void	draw_cartesian_table(t_window *win, int height, int width)
{
	draw_line90d(win, (t_vector){height * .5, 0, 0, WHITE}, WEAST, 2);
	draw_line90d(win, (t_vector){0, width * .5, 0, WHITE}, NORTH, 2);
}
