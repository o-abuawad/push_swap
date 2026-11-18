/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:07:39 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/02 11:08:45 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_stack *s)
{
	t_node	*first;
	t_node	*second;

	if (!s || s->size < 2)
		return (0);
	first = s->head;
	second = first;
	while (second->next)
		second = second->next;
	s->head = first->next;
	second->next = first;
	first->next = NULL;
	return (1);
}

void	ra(t_ps *ps)
{
	if (!rotate(&ps->a))
		return ;
	write(1, "ra\n", 3);
	ps->bench.ra++;
	ps->bench.total++;
}

void	rb(t_ps *ps)
{
	if (!rotate(&ps->b))
		return ;
	write(1, "rb\n", 3);
	ps->bench.rb++;
	ps->bench.total++;
}

void	rr(t_ps *ps)
{
	int	a;
	int	b;

	a = rotate(&ps->a);
	b = rotate(&ps->b);
	if (a || b)
	{
		write(1, "rr\n", 3);
		ps->bench.rr++;
		ps->bench.total++;
	}
}
