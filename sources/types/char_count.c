#include "libfpp.h"

int	char_count(const char *str, int c)
{
	int	i;
	int	output;

	if (!str)
		return (0);
	output = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == c)
			output++;
	}
	return (output);
}
