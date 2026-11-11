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

void	rev_rotate(t_stack *s)
{
	t_node	*prev;
	t_node	*curr;

	if (!s || s->size < 2 || !s->head || !s->head->next)
		return ;
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
}
