#include "libfpp.h"

char	**grid_newsqr(int area)
{
	char	**grid;
	int			i;

	if (area <= 0)
		return (NULL);
	i = -1;
	grid = (char **)mem_calloc(area + 1, sizeof(char *));
	while (++i < area)
		grid[i] = (char *)mem_calloc(area + 1, sizeof(char));
	return (grid);
}
