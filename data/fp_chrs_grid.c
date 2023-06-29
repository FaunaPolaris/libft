#include "libft.h"

int	fp_chrs_grid(char ***grid, int x, int y, char target)
{
	int	output;

	output = 0;
	if (grid[0][y - 1][x] == target)
		output++;
	if (grid[0][y][x - 1] == target)
		output++;
	if (grid[0][y + 1][x] == target)
		output++;
	if (grid[0][y][x + 1] == target)
		output++;
	return (output);
}
