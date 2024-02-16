#include "libfpp.h"

void	ll_del_one(t_llist *llst)
{
	free(llst->value);
	free(llst);
}
