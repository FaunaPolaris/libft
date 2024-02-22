#include "libfpp.h"

t_llist	*ll_node(char *value)
{
	t_llist *new;

	if (!value)
		return (NULL);
	new = (t_llist *)mem_calloc(1, sizeof(t_llist));
	if (!new)
		return (NULL);
	new->value = str_dup(value);
	new->next = NULL;
	return (new);	
}
