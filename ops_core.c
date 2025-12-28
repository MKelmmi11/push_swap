#include "push_swap.h"

void	sa(t_node **a, int print)
{
	op_swap(a);
	print_op("sa", print);
}

void	pa(t_node **a, t_node **b, int print)
{
	op_push(a, b);
	print_op("pa", print);
}

void	pb(t_node **a, t_node **b, int print)
{
	op_push(b, a);
	print_op("pb", print);
}

void	ra(t_node **a, int print)
{
	op_rotate(a);
	print_op("ra", print);
}

void	rra(t_node **a, int print)
{
	op_revrotate(a);
	print_op("rra", print);
}
