#include "libft.h"

char	**fp_square_grid(char **grid, int size)
{
	int	i;

	i = 0;
	if (!grid)
		grid = (char **)malloc(sizeof(char *) * size + 1);
	else
		return (grid);
	while (i <= size)
	{
		grid[i] = (char *)malloc(sizeof(char) * size + 1);
		grid[i][size] = '\0';
		i++;
	}
	grid[i] = NULL;
	return (grid);
}
