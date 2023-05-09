#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("original str:%s\ncharacter to find:%s\n", argv[1], argv[2]);
	printf("new str:%s\n", ft_strchr(argv[1], argv[2][0]));
	printf("std chr:%s\n", strchr(argv[1], argv[2][0]));
	return (0);
}
