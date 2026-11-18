/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:02:52 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/18 14:13:53 by osama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_node
{
	int				val;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	int		size;
}	t_stack;

typedef enum e_mode
{
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE
}	t_mode;

typedef struct s_options
{
	t_mode	mode;
	int		bench;
}	t_options;

typedef struct s_bench
{
	double	disorder;
	char	*strategy;
	int		total;
	int		sa;
	int		sb;
	int		ss;
	int		pa;
	int		pb;
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
}	t_bench;

typedef struct s_ps
{
	t_stack		a;
	t_stack		b;
	t_options	opt;
	t_bench		bench;
}	t_ps;

/* Internal stack helpers */
t_node	*pop(t_stack *s);
void	push(t_stack *s, t_node *node);
int		swap(t_stack *s);
int		rotate(t_stack *s);
int		rev_rotate(t_stack *s);

/* Push_swap operations */
void	sa(t_ps *ps);
void	sb(t_ps *ps);
void	ss(t_ps *ps);
void	pa(t_ps *ps);
void	pb(t_ps *ps);
void	ra(t_ps *ps);
void	rb(t_ps *ps);
void	rr(t_ps *ps);
void	rra(t_ps *ps);
void	rrb(t_ps *ps);
void	rrr(t_ps *ps);

/* Algorithms */
int		assign_index(t_stack *a);
double	compute_disorder(t_stack *a);
void	selection_sort(t_ps *ps);
void	medium_sort(t_ps *ps);
void	complex_sort(t_ps *ps);
void	adaptive_sort(t_ps *ps);

/* Bench & Utils */
void	print_bench(t_ps *ps);
void	free_stack(t_stack *s);

/* Parsing (to be linked by partner) */

#endif
