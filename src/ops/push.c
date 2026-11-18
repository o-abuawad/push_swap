/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:10:20 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/11 13:21:29 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*pop(t_stack *s)
{
	t_node	*node;

	if (!s || s->size == 0 || !s->head)
		return (NULL);
	node = s->head;
	s->head = node->next;
	node->next = NULL;
	s->size--;
	return (node);
}

void	push(t_stack *s, t_node *node)
{
	if (!s || !node)
		return ;
	node->next = s->head;
	s->head = node;
	s->size++;
}

void	pa(t_ps *ps)
{
	t_node	*node;

	node = pop(&ps->b);
	if (!node)
		return ;
	push(&ps->a, node);
	write(1, "pa\n", 3);
	ps->bench.pa++;
	ps->bench.total++;
}

void	pb(t_ps *ps)
{
	t_node	*node;

	node = pop(&ps->a);
	if (!node)
		return ;
	push(&ps->b, node);
	write(1, "pb\n", 3);
	ps->bench.pb++;
	ps->bench.total++;
}
