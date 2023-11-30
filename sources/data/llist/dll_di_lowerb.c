#include "llist.h"

int	dll_di_lowerback(t_dllist *head, int than)
{
	head = dll_find_back(head);
	while (head)
	{
		if (head->dindex < than)
		{
		return (head->dindex);
			break ;
		}
		head = head->prev;
	}
	return (0);
}
