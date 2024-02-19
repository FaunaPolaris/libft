#include "libfpp.h"

void	ll_change_node(t_llist *node, char *new_value)
{
	free(node->value);
	node->value = str_dup(new_value);
}
