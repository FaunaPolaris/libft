#include "libfpp.h"

int	dll_di_haslower(t_dllist *head, int than)
{
	while (head)
	{
		if (head->dindex < than)
			return (1);
		head = head->next;
	}
	return (0);
}
