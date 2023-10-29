#include "libft.h"

char	*str_copy_upto(char *str, int c)
{
	char	*output;
	int		i;

	if (!str)
		return (NULL);
	output = (char *)mem_calloc(str_len(str) + 1, sizeof(char));
	if (!output)
		return (NULL);
	i = -1;
	while (str[++i] && str[i] != c)
		output[i] = str[i];
	return (output);
}
