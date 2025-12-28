#include "push_swap.h"

static void	sort_three(t_node **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->index;
	y = (*a)->next->index;
	z = (*a)->next->next->index;
	if (x > y && y < z && x < z)
		sa(a, 1);
	else if (x > y && y > z)
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (x > z)
		ra(a, 1);
	else if (y > z)
	{
		sa(a, 1);
		ra(a, 1);
	}
}

void	sort_small(t_node **a, t_node **b)
{
	while (lst_size(*a) > 3)
		pb(a, b, 1);
	sort_three(a);
	while (*b)
		pa(a, b, 1);
}
