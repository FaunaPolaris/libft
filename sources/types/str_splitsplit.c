#include "libfpp.h"

static char	***st_free(char ***output, char **temp);
static int	st_check(const char *str, int frst);

char	***str_splitsplit(const char *str, int frst, int scnd)
{
	char	***output;
	char		**temp;
	int			height;
	int			i;

	if (!str)
		return (NULL);
	height = st_check(str, frst);
	output = (char ***)mem_calloc(height + 1, sizeof(char**));
	if (!output)
		return (NULL);
	temp = str_split(str, frst);
	if (!temp)
		return (st_free(output, temp));
	i = -1;
	while (++i < height)
	{
		output[i] = str_split(temp[i], scnd);
		if (!output[i])
			return (st_free(output, temp));
	}
	st_free(NULL, temp);
	return (output);
}

static int	st_check(const char *str, int frst)
{
	int	output;
	int	len;

	len = str_len(str);
	output = char_count(str, frst) + 1;
	if (str[0] == frst)
		output--;
	if (str[len] == frst)
		output--;
	return (output);
}

static char	***st_free(char ***output, char **temp)
{
	int	i;

	if (output)
	{
		i = -1;
		while (output[++i])
			grid_free(output[i]);
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
