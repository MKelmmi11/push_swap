#include "push_swap.h"

void	print_op(const char *op, int print)
{
	int	i;

	if (!print)
		return ;
	i = 0;
	while (op[i])
	{
		write(1, &op[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
