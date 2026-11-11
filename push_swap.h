/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:02:52 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/02 11:05:42 by oabu-awa         ###   ########.fr       */
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

t_node	*pop(t_stack *s);
void	push(t_stack *s, t_node *node);
void	swap(t_stack *s);
void	rotate(t_stack *s);
void	rev_rotate(t_stack *s);

void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);

void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);

void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

int		check_arg(int argc, char **argv);
int		check_number(char **number, int start);
void	display_error(void);
int		check_flag(char **argv);

void	selection_sort(t_stack *a, t_stack *b);
void	simple(void);
void	medium(void);
void	complex(void);
void	adaptive(void);

t_node	*ft_lstlast(t_stack *s);

#endif
