#include "libfpp.h"

void	*g_mlx;
t_constants	*g_mtx;

int	main(void)
{
		t_window	*win;
		g_mlx = mlx_init();
		g_mtx = mtx_init();

		win = win_cartesian_table(320, 320);
		if (!win)
				return (NULL);
		mlx_loop(g_mlx);
		mlx_destroy_display(g_mlx);
		free(win);
		return(0);
}

void	draw_cartesian_table(t_window *win, int height, int width)
{
	draw_line(win, (t_vector){height * .5, 0, 0, WHITE}, 
					(t_vector){heighth * .5, width, 0, WHITE});

}
