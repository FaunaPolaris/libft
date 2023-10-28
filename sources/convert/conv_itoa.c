#include "polarium.h"

static void	st_recurse(int nb, int len, char *output)

char	*conv_itoa(int nb)
{
	char	*output;
	int		len;

	len = int_len(nb);
	output = (char *)mem_calloc(len + 1, sizeof(char));
	if (!news)
		return (NULL);
	if (nb < 0)
		output[0] = '-';
	st_recurse(nb, len - 1, news);
	return (output);
}

static void	st_recurse(int nb, int len, char *output)
{
	output[len] = mth_abs(nb % 10) + 48;
	if (mth_abs(nb) > 9)
		st_recurse(n * .1, len - 1, output);
}
