#include "polarium.h"

char	*str_find_char(const char *s, int c, int after)
{
	int	i;

	i = -1;
	while (s[++i] && s[i] != (char)c)
		;
	if (s[i] && s[i + 1] && s[i] == (char)c)
	{
		if (after)
			return ((char *)&s[i + 1]);
		return ((char *)&s[i]);
	}
	return (NULL);
}
