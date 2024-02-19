#include "libfpp.h"

size_t	ll_len(t_llist *list)
{
	size_t	output;

	output = 0;
	while (list)
	{
		list = list->next;
		output++;
	}
	return (output);
}
