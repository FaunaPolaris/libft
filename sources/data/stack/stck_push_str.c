#include "libfpp.h"

void	stck_push_str(t_stack *stack, char *input)
{
	dll_add_frnt(&stack->top, (void *)input);
}
