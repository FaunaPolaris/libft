#ifndef GRAPHICS_H
#define GRAPHICS_H

// drawing object
t_window	*win_open(char *title, int width, int height);
int			win_close_sequence(int keycode, void *window);
int			win_close(void *mlx, void *window);
//		special windows
t_window	*win_cartesian_table(int height, int width);

// basic drawing functions
int		draw_pixel(t_window *win, int x, int y, int color);
void	drac_pixel(t_window *win, int x, int y, int color);
void	draw_update(t_window *win);
//		2d forms
void	draw_point(t_window *win, t_vector vertice, int color);
void	draw_line(t_window *win, t_vector point_a, t_vector point_b);
void	draw_line90d(t_window *win, t_vector stt,
				t_direction direction, int thickness);
void	draw_square(t_window *win, t_vector topl, t_vector botr, int fill);
void	draw_fill(t_window *win, t_vector start, t_vector end, int gradient);
void	draw_cartesian_table(t_window *win, int height, int width);
//		3d perspectives
void	draw_cube(t_window *win, t_vector stt, t_vector end,
				t_vector (*pers) (const t_vector));
void	draw_plane(t_window *win, t_vector stt, t_vector end,
				t_vector (*projct) (const t_vector));
// 		formula drawing
void	draw_butterfly(t_window *win, t_vector center);
void	draw_circle(t_window *win, t_vector center, int radius, int color);
int		draw_parabola(t_window *win, t_vector stt, int lenght);
int		draw_mth(t_window *win, t_vector sttm, int(*mth)(int));
void	draw_helix(t_window *win, t_vector stt, int scale);
//advanced graphical concepts
float 	perlin_nowl(float x, float y, float freq, int depth);

#endif
