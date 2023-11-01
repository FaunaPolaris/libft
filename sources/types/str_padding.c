#include "libft.h"

char	*str_padding(char *str, int padding, int c)
{
	char	*output;
	int		i;
	int		j;
	int		len;

	if (!str)
		return (NULL);
	len = (int)str_len(str);
	i = -1;
	j = -1;
	if (len > padding)
		return (NULL);
	output = (char *)mem_calloc(padding + 1, sizeof(char));
	if (!output)
		return (NULL);
	while (++i < padding - len)
		output[i] = (char)c;
	while (++j < len)
		output[i++] = str[j];
	return (output);
}
