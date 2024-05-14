#include "libfpp.h"

static char	*st_error(char *output);

char	*fd_read_upto(int fd, int c)
{
	char	*buffer;
	char	*output;
	int	bytes_read;

	output = str_dup("");
	buffer = (char *)mem_calloc(BUFFER_SIZE, sizeof(char));
	while (!char_count(output, (char)c))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == 0)
		{
			free(buffer);
			break ;
		}
		if (bytes_read == -1)
		{
			free(buffer);
			return (st_error(output));
		}
		output = str_join(output, buffer, 2);
	}
	return (output);
}

static char	*st_error(char *output)
{
	if (output)
		free(output);
	return (NULL);
}
