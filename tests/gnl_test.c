#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	fd;
	char	*line;

	if (argc != 2)
		return (1);
	fd = open(argv[1], O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		fp_printf("%s", line);
		if (line)
			free(line);
	}
	return (0);
}
