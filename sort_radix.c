#include "push_swap.h"

void	sort_radix(t_node **a, t_node **b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	i = 0;
	size = lst_size(*a);
	max_bits = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	j = 0;
	while (i < max_bits)
	{
		while (j < size)
		{
			if (((*a)->index >> i) & 1)
				ra(a, 1);
			else
				pb(a, b, 1);
			j++;
		}
		while (*b)
			pa(a, b, 1);

		i++;
	}
}
