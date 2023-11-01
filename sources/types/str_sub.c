#include "libfpp.h"

void	str_subs(char *line, int old, int sub)
{
	size_t	i;
	size_t	len;

	if (sub == '\0')
		return ;
	i = -1;
	len = str_len(line);
	while (++i < len)
		if (line[i] == (char)old)
			line[i] = (char)sub;
}
