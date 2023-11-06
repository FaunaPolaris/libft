#include "libfpp.h"

int	int_len_base(int nb, int base)
{
	int	output;

	output = 0;
	while ((nb / base) > 0)
	{
		nb /= base;
		output++;
	}
	return (output);
}
