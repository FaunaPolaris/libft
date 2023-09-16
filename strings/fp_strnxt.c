#include "libft.h"

char	*fp_strnxt(const char *str, int c)
{
	int	i;

	if (!str)
		return (NULL);
	i = -1;
	while (str[++i] && str[i] != (char)c)
		;
	if (str[++i])
		return (&str[i]);
	return (NULL);
}
