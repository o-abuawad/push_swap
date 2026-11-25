/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:04:03 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/11 13:09:34 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort(t_stack *a, t_stack *b)
{
	t_node	*first;
	int		value;

	if (!a || !b)
		return ;
	while (a->size > 0)
	{
		first = a->head;
		value = first->val;
		while (first)
		{
			if (first->val > value)
				value = first->val;
			first = first->next;
		}
		while (a->head->val != value)
			ra(a);
		pb(a, b);
	}
	while (b->size > 0)
		pa(a, b);
}
