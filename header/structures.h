#ifndef STRUCTURES_H
#define STRUCTURES_H

// printf

typedef struct s_printf
{
	char	*line;
	char	**flags;
	
}	t_printf;

// data

typedef struct s_dllist
{
	struct s_dllist	*next;
	struct s_dllist *prev;
	int				dindex;
	int				as_int;
}	t_dllist;

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

#endif