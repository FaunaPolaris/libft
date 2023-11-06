#include "libfpp.h"

static char	*st_error(char *output);

char	*fd_read_upto(int fd, int c)
{
	char	buffer[BUFFER_SIZE];
	char	*output;
	int	bytes_read;

	output = str_dup("");
	while (!str_find_char(output, (char)c, 0))
	{
		bytes_read = read(BUFFER_SIZE, buffer, fd);
		if (bytes_read == 0)
			break ;
		if (bytes_read == -1)
			return (st_error(output));
		output = str_join(output, buffer, 1);
	}
	return (output);
}

static char	*st_error(char *output)
{
	if (output)
		free(output);
	return (NULL);
}
