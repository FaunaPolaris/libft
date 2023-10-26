#include "polarium.h"

int	is_prime(int c)
{
	int	i;

	i = 1;
	while (++i < c)
	{
		if (c % i == 0)
			return (0);
	}
	return (1);
}
