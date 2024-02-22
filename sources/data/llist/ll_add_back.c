#include "libfpp.h"

int	ll_add_back(t_llist **llst, t_llist *new)
{
	t_llist	*aux;

	if (!new)
		return (FALSE);
	if (!*llst)
		*llst = new;
	else
	{
		aux = *llst;
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	return (TRUE);
}
