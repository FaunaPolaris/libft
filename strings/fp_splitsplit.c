#include "libft.h"

static char	***st_free(char ***output, char **temp);

char	***fp_splitsplit(const char *str, int frst, int scnd)
{
	char	***output;
	char		**temp;
	int			height;
	int			i;

	if (!str)
		return (NULL);
	height = fp_chrcnt(str, frst) + 1;
	output = (char ***)fp_calloc(height + 1, sizeof(char**));
	if (!output)
		return (NULL);
	temp = fp_split(str, frst);
	if (!temp)
		return (st_free(output, temp));
	i = -1;
	while (++i < height)
	{
		output[i] = fp_split(temp[i], scnd);
		if (!output[i])
			return (st_free(output, temp));
	}
	st_free(NULL, temp);
	return (output);
}

static char	***st_free(char ***output, char **temp)
{
	int	i;

	if (output)
	{
		i = -1;
		while (output[++i])
			fp_grdfre(output[i]);
		free(output);
	}
	if (temp)
	{
		i = -1;
		while (temp[++i])
			free(temp[i]);
		free(temp);
	}
	return (NULL);
}
