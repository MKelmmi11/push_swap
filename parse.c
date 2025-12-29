#include "push_swap.h"

static int	is_number(char *s)
{
	int	i;

	i = 0;
	if (!s || !s[0])
		return (0);
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	exists_value(t_node *a, int v)
{
	while (a)
	{
		if (a->value == v)
			return (1);
		a = a->next;
	}
	return (0);
}

static void	add_value(t_node **a, char *s)
{
	long	val;

	if (!is_number(s))
		error_exit();
	val = ft_atol(s);
	if (val < -2147483648L || val > 2147483647L)
		error_exit();
	if (exists_value(*a, (int)val))
		error_exit();
	lst_add_back(a, lst_new((int)val));
	if (!*a)
		error_exit();
}

int	parse_args(int argc, char **argv, t_node **a)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		add_value(a, argv[i]);
		i++;
	}
	return (1);
}
