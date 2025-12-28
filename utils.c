#include "push_swap.h"

int	is_sorted(t_node *lst)
{
	if (!lst)
		return (1);
	while (lst->next)
	{
		if (lst->value > lst->next->value)
			return (0);
		lst = lst->next;
	}
	return (1);
}

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
