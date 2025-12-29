#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_node
{
	int		value;
	int		index;
	struct s_node	*next;
}	t_node;

long	ft_atol(const char *s);
int	parse_args(int argc, char **argv, t_node **a);

t_node	*lst_new(int value);
void	lst_add_back(t_node **lst, t_node *new);
int	lst_size(t_node *lst);
void	lst_clear(t_node **lst);

int	is_sorted(t_node *lst);
void	error_exit(void);

void	assign_index(t_node *lst);

void	op_swap(t_node **s);
void	op_push(t_node **dst, t_node **src);
void	op_rotate(t_node **s);
void	op_revrotate(t_node **s);

void	print_op(const char *op, int print);

void	sa(t_node **a, int print);
void	pb(t_node **a, t_node **b, int print);
void	ra(t_node **a, int print);
void	rra(t_node **a, int print);
void	pa(t_node **a, t_node **b, int print);

int	apply_op(char *op, t_node **a, t_node **b);

void	sort_small(t_node **a, t_node **b);
void	sort_radix(t_node **a, t_node **b);

#endif
