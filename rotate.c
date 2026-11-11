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

void	rotate(t_stack *s)
{
	t_node *first;
	t_node *second;

	if (!s || s->size < 2)
		return ;
	first = s->head;
	second = ft_lstlast(s);
	s->head = first->next;
	second->next = first;
	first->next = NULL;
}
