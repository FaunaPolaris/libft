#include "libfpp.h"

int	grid_counts(char **grid, int y, int x, char target)
{
	int	output;

	output = 0;
	if (grid[y - 1][x] == target)
		output++;
	if (grid[y][x - 1] == target)
		output++;
	if (grid[y + 1][x] == target)
		output++;
	if (grid[y][x + 1] == target)
		output++;
	return (output);
}
