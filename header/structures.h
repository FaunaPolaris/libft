#ifndef STRUCTURES_H
#define STRUCTURES_H

//	math

typedef struct s_constants
{
	double	cos_p45;
	double	sin_n30;
	double	convert_to_radian;
	int		chance;
}	t_constants;

typedef struct s_vector
{
	double	y;
	double	x;
	double	z;
	int		color;
}	t_vector;

typedef struct s_ivector
{
	int		y;
	int		x;
	int		z;
}	t_ivector;

typedef struct s_matrix
{
	int		col;
	int		row;
	int		size;
	double **elem;
}	t_matrix;

// printf

typedef struct s_printf
{
	char	*line;
	char	**flags;
}	t_printf;

// data
//		linked list
typedef struct s_llist
{
	char		*value;
	struct s_llist	*next;
}	t_llist;

//		doubly linked list
typedef struct s_dllist
{
	struct s_dllist	*next;
	struct s_dllist *prev;
	int				dindex;
	int				as_int;
	char		*as_str;
}	t_dllist;

//		stack
typedef struct s_stack
{
	t_dllist	*top;
	t_dllist	*bot;
	char		id;
}	t_stack;

//		wireframe
typedef struct s_wireframe
{
	struct s_wireframe	*xplus;
	struct s_wireframe	*xmins;
	struct s_wireframe	*yplus;
	struct s_wireframe	*ymins;
	int	width;
	int	height;
	int	color;
}	t_wireframe;

//	graphics;

typedef struct s_window
{
	void	*window;
	void	*img;
	char	*addr;
	char	*name;
	int		width;
	int		height;
	int		bits;
	int		line;
	int		endian;
	int		exists;
}	t_window;

#endif
