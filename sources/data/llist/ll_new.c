#include "libfpp.h"

t_llist	*ll_new(char **variables)
{
	int	i;
	t_llist *llst;

	i = -1;
	llst = NULL;
	while (variables[++i])
		ll_add_back(&llst ,ll_node(variables[i]));
	return (llst);
}
