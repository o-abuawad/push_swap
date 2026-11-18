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

void	selection_sort(t_ps *ps)
{
	t_node	*first;
	int		value;

	if (!ps)
		return ;
	while (ps->a.size > 0)
	{
		first = ps->a.head;
		value = first->val;
		while (first)
		{
			if (first->val < value)
				value = first->val;
			first = first->next;
		}
		while (ps->a.head->val != value)
			ra(ps);
		pb(ps);
	}
	while (ps->b.size > 0)
		pa(ps);
}
