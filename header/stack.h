#ifndef STACK_H
#define STACK_H

// basic create / delete

t_stack	*stck_new(void **values, char id);
void	stck_rmv(t_stack *stack);

// push_swap basic movements

int	stck_push(t_stack *donor, t_stack *receiver);
int	stck_swap(t_stack *stack, int print);

int	stck_rott_lft(t_stack *stack, int print);
int	stck_rott_lft_double(t_stack *stack_a, t_stack *stack_b);

int	stck_rott_rgt(t_stack *stack, int print);
int	stck_rott_rgt_double(t_stack *stack_a, t_stack *stack_b);

// push_swap advanced movements

int	stck_highest_to_front(t_stack *sack);
void	stck_pop(t_stack *stack);
int	stck_push_all(t_stack *from, t_stack *to);

// printing function (needs to be moved to printing.h)

void	stck_disp(t_stack *stack);

// adding elements (breaks push_swap rules)

void	stck_rpush_tab(t_stack *stack, char **input);

#endif
