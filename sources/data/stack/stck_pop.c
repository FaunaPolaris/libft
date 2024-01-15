#include "libfpp.h"

void	stck_pop(t_stack *stack)
{
	t_dllist	*temp;

	temp = stack->top;
	stack->top = stack->top->next;
	free(temp->as_str);
	free(temp);
	return ;
}
