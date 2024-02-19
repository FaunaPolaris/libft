#include "libfpp.h"

void	ll_remove_node(t_llist **head, char *value)
{
	t_llist	*current;
	t_llist	*prev;

	current = *head;
	while (current)
	{
		if (!str_comp_upto(current->value, value, '='))
		{
			if (prev != current)
			{
				prev->next = current->next;
				free(current->value);
				free(current);
				current = prev;
			}
			else
			{
				current = current->next;
				free(prev->value);
				free(prev);
			}
		}
		prev = current;
		current = current->next;
	}
}
