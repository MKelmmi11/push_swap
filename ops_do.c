#include "push_swap.h"

void	op_swap(t_node **s)
{
	t_node	*a;
	t_node	*b;

	if (!s || !*s || !(*s)->next)
		return ;
	a = *s;
	b = a->next;
	a->next = b->next;
	b->next = a;
	*s = b;
}

void	op_push(t_node **dst, t_node **src)
{
	t_node	*tmp;

	if (!src || !*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	op_rotate(t_node **s)
{
	t_node	*first;
	t_node	*last;

	if (!s || !*s || !(*s)->next)
		return ;
	first = *s;
	*s = first->next;
	first->next = NULL;
	last = *s;
	while (last->next)
		last = last->next;
	last->next = first;
}

void	op_revrotate(t_node **s)
{
	t_node	*prev;
	t_node	*last;

	if (!s || !*s || !(*s)->next)
		return ;
	prev = NULL;
	last = *s;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *s;
	*s = last;
}
