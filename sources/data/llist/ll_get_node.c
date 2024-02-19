#include "libfpp.h"

t_llist	*ll_get_node(t_llist **head, char *value)
{
	t_llist	*output;

	output = *head;
	while (output)
	{
		if (!str_comp(output->value, value))
			return (output);
		output = output->next;
	}
	return (NULL);
}
