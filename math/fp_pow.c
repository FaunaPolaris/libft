#include "libft.h"

int	fp_pow(int operand, int power)
{
	int	i;

	if (power <= 0)
		return (0);
	i = -1;
	while (++i < power)
	{
		operand *= operand;
	}
	return (operand);
}
