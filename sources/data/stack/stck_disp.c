#include "libfpp.h"

void	stck_disp(t_stack *stack)
{
	int	stack_len;
	int	line_limit;
	t_dllist	*walker;

	if (!stack->top)
		return ;
	stack_len = dll_size(stack->top);
	walker = stack->top;
	printf("stack id: %c\n", stack->id);
	if (stack_len <= 0 || !walker)
		return ;
	line_limit = mth_sqrt(stack_len);
	for (int i = 1; walker; i++)
	{
		printf("| %4i |", walker->as_int);
		if (i == line_limit)
		{
			write (1, "\n", 1);
			i = 0;
		}
		walker = walker->next;
	}
	if (stack->top && stack->bot)
		printf("\033[1;32m%i | %i \033[0m\n",
				stack->top->as_int,
				stack->bot->as_int);
	write (1, "\n", 1);
}
