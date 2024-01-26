#include "libfpp.h"

void	*g_mlx;
t_constants	*g_mtx;

int		main(void)
{
		t_window	*win;

		g_mlx = mlx_init();
		g_mtx = mtx_init();
		win = win_open("graph_test", 320, 320);
		draw_circle(win, vec_center(), 1, 0xFFFFFF);
		draw_update(win);
		mlx_loop(g_mlx);
}
