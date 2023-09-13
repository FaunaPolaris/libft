#include "libft.h"

int	fp_gridlen(char **grid)
{
	int	i;

	if (!grid)
		return (0);
	i = 0;
	while (grid[i])
		i++;
	return (i);
}
