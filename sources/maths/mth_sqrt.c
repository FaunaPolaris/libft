#include "libfpp.h"

int	mth_sqrt(int n)
{
	int	output;

	output = 1;
	if (n < 0)
		return (FALSE);
	while (output * output < n)
	{
		if (output * output == n)
			return (output);
		else if (output > HIGHEST_SQRT)
			break ;
		output++;
	}
	return (output);
}
