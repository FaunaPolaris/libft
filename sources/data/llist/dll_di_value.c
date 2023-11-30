#include "llist.h"

int	dll_di_value(t_dllist *head, int dindex)
{
	while (head)
	{
		if (head->dindex == dindex)
			return (head->as_int);
		head = head->next;
	}
	return (0);
}
