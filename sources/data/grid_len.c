#include "libfpp.h"

int	grid_len(char **grid)
{
	int	i;

	if (!grid)
		return (0);
	i = -1;
	while (grid[++i])
		;
	return (i);
}
