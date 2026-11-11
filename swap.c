/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:11:56 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/02 11:16:03 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(t_stack *s)
{
	t_node *first;
	t_node *second;

	if (!s || s->size < 2)
		return ;

	first = s->head;
	second = first->next;

	first->next = second->next;
	second->next = first;
	s->head = second;
}
