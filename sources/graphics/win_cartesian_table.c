#include "libfpp.h"

t_window	*win_cartesian_table(int height, int width)
{
	t_window	*output;

	output = win_open("Cartesian table", height, width);
	if (!output)
			return (NULL);
	draw_cartesian_table(output, height, width);
	return (output);
}
