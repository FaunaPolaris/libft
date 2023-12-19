#include "libfpp.h"

int	dll_di_lowerfrnt(t_dllist *head, int than)
{
	while (head)
	{
		if (head->dindex < than)
		{
			return (head->dindex);
			break ;
		}
		head = head->next;
	}
	return (0);
}
