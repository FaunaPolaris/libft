#include "libfpp.h"

char	**str_split_once(char *str, int separator, int flag)
{
	char	**output;
	char	*hold;

	hold = str_find_char(str, separator, 1);
	if (!hold)
		return (NULL);
	output = (char **)mem_calloc(3, sizeof(char *));
	*str_find_char(str, separator, 0) = '\0';
	output[0] = str_dup(str);
	output[1] = str_dup(hold);
	if (flag)
		free(str);
	return (output);
}
