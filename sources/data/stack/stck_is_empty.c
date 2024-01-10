#include "libfpp.h"

int	stck_is_empty(t_stack *stack)
{
	if (!stack->top)
		return (TRUE);
	return (FALSE);
}
