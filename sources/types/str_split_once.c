#include "libfpp.h"

char	**str_split_once(char *str, int separator, int flag)
{
	char	**output;
	char	*hold;
	char	*util;

	hold = str_find_char(str, separator, 1);
	if (!hold)
		return (NULL);
	output = (char **)mem_calloc(3, sizeof(char *));
	*str_find_char(str, separator, 0) = '\0';
	output[0] = str_dup(str);
	if (output[0][0])
	{
		util = str_dup("i");
		util[0] = separator;
		output[0] = str_join(output[0], util, 2);
	}
	output[1] = str_dup(hold);
	if (flag)
		free(str);
	return (output);
}
