#include "libfpp.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc != 2)
		return (0);
	printf("opening file %s\n", argv[1]);
	fd = open(argv[1], O_RDONLY);
	line = fd_read_all(fd);
	printf("%s", line);
	free(line);
	close(fd);
	return (0);
}
