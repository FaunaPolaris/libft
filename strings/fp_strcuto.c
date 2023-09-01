#include "libft.h"

void	fp_strcuto(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			str[i] = '\0';
		i++;	
	}
}
