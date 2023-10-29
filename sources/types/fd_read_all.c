#include "polarium.h"

char	*fd_read_all(int fd)
{
	char	*line;
	char	*output;

	output = str_dup("");
	while (1)
	{
		line = fd_gnl(fd);
		if (!line)
			break ;
		output = str_join(output, line, 2);
	}
	return (output);
}
