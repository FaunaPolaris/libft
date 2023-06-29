#include "libft.h"

char	**fp_rectangle_grid(char **grid, int width, int height)
{
	int	i;

	i = 0;
	if (!grid)
		grid = (char **)malloc(sizeof(char *) * height + 1);
	else
		return (grid);
	while (i <= width)
	{
		grid[i] = (char *)malloc(sizeof(char) * width + 1);
		grid[i][width] = '\0';
		i++;
	}
	grid[i] = NULL;
	return (grid);
}
