#include "libfpp.h"

void	draw_cartesian_table(t_window *win, int height, int width)
{
	draw_line(win, (t_vector){height * .5, 0, 0, WHITE}, 
					(t_vector){height * .5, width, 0, WHITE});
	draw_line(win, (t_vector){0, width * .5, 0, WHITE},
					(t_vector){height, width * .5, 0, WHITE});
}
