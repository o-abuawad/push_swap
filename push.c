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

	if (!s || s->size == 0)
		return ;
	node = s->head;
	s->head = node->next;
	node->next = NULL;
	s->size--;

	return (node);
}

void	push(t_stack *s, t_node node);
{
	if (!s || !node)
		return ;
	node->next = s->head;
	s->head = node;
	s->size++;
}
