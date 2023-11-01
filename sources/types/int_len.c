#include "libfpp.h"

int	int_len(int nb)
{
	int	output;

	output = 0;
	if (nb < 0)
		output++;
	while (mth_abs(nb) >= 10)
	{
		output++;
		nb *= .1;
	}
	return (output);
}
