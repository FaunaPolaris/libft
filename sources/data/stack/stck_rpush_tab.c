#include "libfpp.h"

void	stck_rpush_tab(t_stack *stack, char **input)
{
	int	i;

	i = -1;
	if (!input)
		return ;
	while (input[++i])
		;
	while (i > 0)
	{
		dll_add_frnt(&stack->top, input[--i]);
	}
	return ;
}
