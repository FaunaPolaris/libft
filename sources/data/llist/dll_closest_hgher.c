#include "libfpp.h"

int		dll_closest_hgher(t_dllist *head, int to)
{
	t_dllist	*temp;
	int		high_close;

	temp = head;
	high_close = dll_highest(head);
	if (!dll_has_hgher(head, to))
		return (dll_lowest(head));
	while (temp)
	{
		if (temp->as_int < high_close && temp->as_int > to)
			high_close = temp->as_int;
		temp = temp->next;
	}
	return (high_close);
}
