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
#include <stdio.h>
#include <stdlib.h>

void	selection_sort(t_stack *a, t_stack *b)
{
	t_node	*first;
	int		value;

	first = a->head;
	value = first->val;
	while (first->next)
	{
		if (first->next->val < value)
			value = first->next->val;
		first = first->next;
	}
	printf("Value of min: %d\n", value);
	while (a->head)
		pb(a, b);
}

t_node	*push_s(t_stack *s, int v)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->val = v;
	new_node->next = s->head;
	s->head = new_node;
	s->size++;
	return (new_node);
}

void	display(t_node *stack)
{
	t_node	*tmp;

	tmp = stack;
	while (tmp)
	{
		printf("Stack: %d\n", tmp->val);
		tmp = tmp->next;
	}
}
int	main(void)
{
	t_stack	stackA;
	t_stack	stackB;

	stackA.head = NULL;
	stackA.size = 0;
	stackB.head = NULL;
	stackB.size = 0;
	push_s(&stackA, 10);
	push_s(&stackA, 20);
	push_s(&stackA, 0);
	push_s(&stackA, 30);
	push_s(&stackA, -210);
	display(stackA.head);
	selection_sort(&stackA, &stackB);
	display(stackB.head);
}
