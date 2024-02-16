#include "libfpp.h"

char	**grid_add_element(char **grid, char *value)
{
	char	**output;
	int			lenght;
	int			i;

	lenght = grid_len(grid);
	output = (char **)mem_calloc(lenght + 2, sizeof(char *));
	i = -1;
	while (grid[++i])
		output[i] = grid[i];
	output[i] = value;
	free(grid);
	return (output);
}
