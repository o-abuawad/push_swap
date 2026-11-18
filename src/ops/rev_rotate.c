/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:09:13 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/11 13:35:00 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rev_rotate(t_stack *s)
{
	t_node	*prev;
	t_node	*curr;

	if (!s || s->size < 2 || !s->head || !s->head->next)
		return (0);
	prev = NULL;
	curr = s->head;
	while (curr->next)
	{
		prev = curr;
		curr = curr->next;
	}
	prev->next = NULL;
	curr->next = s->head;
	s->head = curr;
	return (1);
}

void	rra(t_ps *ps)
{
	if (!rev_rotate(&ps->a))
		return ;
	write(1, "rra\n", 4);
	ps->bench.rra++;
	ps->bench.total++;
}

void	rrb(t_ps *ps)
{
	if (!rev_rotate(&ps->b))
		return ;
	write(1, "rrb\n", 4);
	ps->bench.rrb++;
	ps->bench.total++;
}

void	rrr(t_ps *ps)
{
	int	a;
	int	b;

	a = rev_rotate(&ps->a);
	b = rev_rotate(&ps->b);
	if (a || b)
	{
		write(1, "rrr\n", 4);
		ps->bench.rrr++;
		ps->bench.total++;
	}
}
