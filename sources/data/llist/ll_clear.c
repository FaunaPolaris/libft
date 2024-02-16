#include "libfpp.h"

void	ll_clear(t_llist **llst)
{
	t_llist *aux;
	t_llist *temp;

	aux = *llst;
	while (aux)
	{	
		temp = aux->next;
		free(aux->value);
		free(aux);
		aux = temp;
	}
	// free(llst);
}
