#include "libfpp.h"

t_stack	*stck_empty(char id)
{
	t_stack	*output;

	output = (t_stack *)mem_calloc(1, sizeof(t_stack));
	if (!output)
		return (NULL);
	output->id = id;
	return (output);
}
