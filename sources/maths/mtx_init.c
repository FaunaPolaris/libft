#include "libfpp.h"

t_constants	*mtx_init(void)
{
	t_constants	*output;

	output = (t_constants *)mem_calloc(1, sizeof(t_constants));
	output->convert_to_radian = 180 / M_PI;
	output->cos_p45 = cos(45 * output->convert_to_radian);
	output->sin_n30 = sin(-30 * output->convert_to_radian);
	return (output);
}
