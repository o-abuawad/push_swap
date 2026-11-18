/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osama </var/spool/mail/osama>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 17:01:02 by osama             #+#    #+#             */
/*   Updated: 2026/11/18 17:27:27 by osama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_sqrt(int n)
{
	int	r;

	r = 1;
	while (r * r < n)
		r++;
	return (r);
}

static void	push_to_b(t_ps *ps, int range)
{
	int	i;

	i = 0;
	while (ps->a.size > 0)
	{
		if (ps->a.head->index <= i)
		{
			pb(ps);
			rb(ps);
			i++;
		}
		else if (ps->a.head->index < i + range)
		{
			pb(ps);
			i++;
		}
		else
			ra(ps);
	}
}

static int	find_max_pos(t_stack *b)
{
	t_node	*node;
	int		max_val;
	int		max_pos;
	int		pos;

	if (!b || !b->head)
		return (0);
	node = b->head;
	max_val = node->index;
	max_pos = 0;
	pos = 0;
	while (node)
	{
		if (node->index > max_val)
		{
			max_val = node->index;
			max_pos = pos;
		}
		node = node->next;
		pos++;
	}
	return (max_pos);
}

static void	push_to_a(t_ps *ps)
{
	int	pos;
	int	steps;

	while (ps->b.size > 0)
	{
		pos = find_max_pos(&ps->b);
		if (pos <= ps->b.size / 2)
		{
			while (pos > 0)
			{
				rb(ps);
				pos--;
			}
		}
		else
		{
			steps = ps->b.size - pos;
			while (steps)
			{
				rrb(ps);
				steps--;
			}
		}
		pa(ps);
	}
}

void	medium_sort(t_ps *ps)
{
	int	range;

	if (!ps || ps->a.size < 2)
		return ;
	range = get_sqrt(ps->a.size);
	if (!assign_index(&ps->a))
		return ;
	push_to_b(ps, range);
	push_to_a(ps);
}
