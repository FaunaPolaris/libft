#include "libfpp.h"

char	**grid_new(int width, int height)
{
	char	**grid;
	int			i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (char **)mem_calloc(height + 1, sizeof(char *));
	i = -1;
	while (++i < width)
		grid[i] = (char *)mem_calloc(width + 1, sizeof(char));
	return (grid);
}
