#include "libfpp.h"

int	grid_iter(char **grid, int op, void (*fp) (char *, int))
{
	int	output;
	int	i;
	int	higher_nbr;

	if (!grid)
		return (0);
	i = -1;
	output = 0;
	while (grid[++i])
	{
		fp(grid[i], op);
		higher_nbr = conv_atoi(grid[i]);
		if (higher_nbr > output)
			output = higher_nbr;
	}
	return (output);
}
