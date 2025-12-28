#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	parse_args(argc, argv, &a);
	if (is_sorted(a))
		return (0);
	assign_index(a);
	if (lst_size(a) <= 5)
		sort_small(&a, &b);
	else
		sort_radix(&a, &b);
	lst_clear(&a);
	return (0);
}
