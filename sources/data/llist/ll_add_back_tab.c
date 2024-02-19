#include "libfpp.h"

void	ll_add_back_tab(t_llist **head, char **values)
{
	int	i;

	i = -1;
	while (values[++i])
			ll_add_back(head, ll_node(values[i]));
}
