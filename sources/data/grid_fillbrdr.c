#include "libfpp.h"

void	grid_fillbrdr(char **grid, char fill, int width, int height)
{
	int	area;
	int	i;
	int	x;
	int	y;

	if (!grid || !fill)
		return ;
	area = width * height--;
	i = -1;
	while (++i < area)
	{
		y = i / width;
		x = i % width;
		if (y == 0 || y == height)
			i += width;
		else if (y == 0 || y == height ||
			       x == 0 || --x == width)
			grid[y][x] = fill;
	}
}
