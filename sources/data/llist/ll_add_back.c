#include "libfpp.h"

void	ll_add_back(t_llist **llst, t_llist *new)
{
	t_llist	*aux;

	if (!*llst)
		*llst = new;
	else
	{
		aux = *llst;
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}	
}
