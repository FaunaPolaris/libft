#include "libft.h"

int	fp_gridlen(char **grid)
{
	int	i;

	i = 0;
	while (grid[i])
		i++;
	return (i);
}
