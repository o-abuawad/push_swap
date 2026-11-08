/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:10:20 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/02 13:31:53 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_node	pop(t_stack *s)
{
	t_node	node;

	if (!s || s->size < 2)
		return ;
	node = s->head;
	if (s->size == 1)
		s->head = NULL;
	else
	{
		s->head = node->next;
		node->prev->next = node->next;
		node->next-prev node->prev;
	}
	node = s->head;
	s->head->next = NULL;
	s->head->prev = NULL;
	s->size--;

	return (node);
}

void	push(t_stack *s, t_node node);
{
	t_node	last;

	if (!s || !node)
		return ;
	if (s->size == 0)
	{
		node->next = node;
		node->prev = node;
		s->head = node;
	}
	else
	{
		last = s->head->prev;
		node->next = s->head;
		node->prev = last;
		last->next = node;
		s->head->prev = node;
		s->head = node;
	}
	s->size++;
}
