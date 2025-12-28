#include "push_swap.h"

static int	*to_array(t_node *lst, int n)
{
	int	*arr;
	int	i;

	arr = (int *)malloc(sizeof(int) * n);
	if (!arr)
		error_exit();
	i = 0;
	while (i < n)
	{
		arr[i] = lst->value;
		lst = lst->next;
		i++;
	}
	return (arr);
}

static void	sort_array(int *arr, int n)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < n)
	{
		tmp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > tmp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = tmp;
		i++;
	}
}

static int	find_pos(int *arr, int n, int v)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (arr[i] == v)
			return (i);
		i++;
	}
	return (-1);
}

void	assign_index(t_node *lst)
{
	int	n;
	int	*arr;
	int	pos;

	n = lst_size(lst);
	arr = to_array(lst, n);
	sort_array(arr, n);
	while (lst)
	{
		pos = find_pos(arr, n, lst->value);
		lst->index = pos;
		lst = lst->next;
	}
	free(arr);
}
