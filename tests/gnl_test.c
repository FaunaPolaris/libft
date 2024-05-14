#include "libfpp.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc != 2)
		return (0);
	printf("opening file %s\n", argv[1]);
	fd = open(argv[1], O_RDONLY);
	while (1)
	{
		line = fd_gnl(fd);
		if (!line)
			break ;
		printf("%s\n", line);
		free(line);
	}
	close(fd);
	return (0);
}
