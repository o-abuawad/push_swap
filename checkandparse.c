/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osama </var/spool/mail/osama>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:37:54 by osama             #+#    #+#             */
/*   Updated: 2026/11/16 14:12:08 by osama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_duplicate(t_stack *a, int value)
{
	t_node	*curr;

	curr = a->head;
	while (curr)
	{
		if (curr->val == value)
			return (1);
		curr = curr->next;
	}
	return (0);
}

static t_node	*new_node(int val)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->val = val;
	node->index = -1;
	node->next = NULL;
	return (node);
}

static void	append_node(t_stack *a, t_node *node)
{
	t_node	*last;

	if (!a->head)
		a->head = node;
	else
	{
		last = a->head;
		while (last->next)
			last = last->next;
		last->next = node;
	}
	a->size++;
}

int	parse_to_stack(char **args, int start,t_stack *a)
{
	long	val;
	t_node	*node;

	while (args && args[start])
	{
		is_digit(args[start]);
		val = ft_atoi(args[start]);
		if (val < -2147483648 || val > 2147483647 || has_duplicate(a, (int)val))
			return (0);
		node = new_node((int)val);
		if (!node)
			return (0);
		append_node(a, node);
		start++;
	}
	return (1);
}
