/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahia <yahia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:10:36 by osama             #+#    #+#             */
/*   Updated: 2026/11/25 16:12:25 by yahia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
static void	sort_arr(int *a, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size - i - 1)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

static void	map_ind(t_node *curr, int *arr, int size)
{
	int	i;

	while (curr)
	{
		i = 0;
		while (i < size)
		{
			if (curr->val == arr[i])
			{
				curr->index = i;
				break ;
			}
			i++;
		}
		curr = curr->next;
	}
}

int	assign_index(t_stack *a)
{
	int		*arr;
	t_node	*curr;
	int		i;

	if(!a || !a->head || a->size = 0)
		return ;
	arr = malloc(sizeof(int) * a->size);
	if (!arr)
		return (0);
	curr = a->head;
	i = 0;
	while (curr)
	{
		arr[i++] = curr->val;
		curr = curr->next;
	}
	sort_arr(arr, a->size);
	map_ind(a->head, arr, a->size);
	free(arr);
	return (1);
}
