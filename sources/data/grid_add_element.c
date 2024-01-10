#include "libfpp.h"

char	**grid_add_element(char **grid, char *value)
{
	char	**output;
	int			lenght;

	lenght = grid_len(grid);
	output = (char **)mem_calloc(lenght + 2, sizeof(char *));
	output[lenght] = value;
	free(grid);
	return (output);
}
