#ifndef DATA_H
#define DATA_H

// wireframe

t_wireframe	**frm_new(int width, int height);
void		frm_free(t_wireframe **wrfrm);

// grid (char **)

char		**grid_new(int width, int height);
char		**grid_newsqr(int area);
char		**grid_add_element(char **grid, char *value);
void		grid_free(char **grid);
void		grid_free3(char ***grid);
void		grid_fillbrdr(char **grid, char fill,
		int width, int height);
void		grid_fill(char **grid, char fill,
		int width, int height);
int			grid_iter(char **grid, int op,
		void (*fp) (char *, int));
int			grid_len(char **grid);
int			grid_countd(char **grid, int y, int x, char target);
int			grid_counts(char **grid, int y, int x, char target);

#endif
