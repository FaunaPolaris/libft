#include "libfpp.h"

char	*str_find_char(const char *s, int c, int jump)
{
	int	i;
	size_t	len;

	i = -1;
	len = str_len(s);
	while (s[++i] && s[i] != (char)c)
		;
	if (s[i] && s[i] == (char)c && jump < (int)len - i)
		return ((char *)&s[i + jump]);
	return ((char *)&s[i]);
}
