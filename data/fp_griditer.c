#include "libft.h"

int	fp_griditer(char **grid, void (*fp) (char *, int))
{
	int	output;
	int	i;

	i = -1;
	output = 0;
	while (grid[++i])
	{
		fp(grid[i], ',');
		if (fp_atoi(grid[i]) > output)
			output = fp_atoi(grid[i]);
	}
	return (output);
}
