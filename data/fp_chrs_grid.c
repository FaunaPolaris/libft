#include "libft.h"

int	fp_chrs_grid(char ***grid, int x, int y, char target)
{
	int	live_cells;

	live_cells = 0;
	if (grid[0][y - 1][x] == target)
		live_cells++;
	if (grid[0][y][x - 1] == target)
		live_cells++;
	if (grid[0][y + 1][x] == target)
		live_cells++;
	if (grid[0][y][x + 1] == target)
		live_cells++;
	return (live_cells);
}
