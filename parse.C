#include "push_swap.h"

static int	is_number(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > 9)
			return (0);
		i++;
	}
	return (1);
}

int	parse_args(int argc, char **argv, t_node **a)
{
	int	i;
	long	val;

	i = 1;
	while (i < argc)
	{
		if (!is_number(argv[i]))
			error_exit();
		val = ft_atol(argv[i]);
		if (val > 2147483647 || val < -2147483647)
			error_exit();
		lst_add_back(a, lst_new((int)val));
		i++;
	}
	return (1);
}
