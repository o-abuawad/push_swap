/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:11:56 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/16 09:44:20 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_stack *s)
{
	t_node	*first;
	t_node	*second;

	if (!s || s->size < 2)
		return (0);
	first = s->head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	s->head = second;
	return (1);
}

void	sa(t_ps *ps)
{
	if (!swap(&ps->a))
		return ;
	write(1, "sa\n", 3);
	ps->bench.sa++;
	ps->bench.total++;
}

void	sb(t_ps *ps)
{
	if (!swap(&ps->b))
		return ;
	write(1, "sb\n", 3);
	ps->bench.sb++;
	ps->bench.total++;
}

void	ss(t_ps *ps)
{
	int	a;
	int	b;

	a = swap(&ps->a);
	b = swap(&ps->b);
	if (a || b)
	{
		write(1, "ss\n", 3);
		ps->bench.ss++;
		ps->bench.total++;
	}
}
