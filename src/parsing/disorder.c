/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 07:46:23 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/19 07:58:27 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/osama/Projects/push_swap/includes/push_swap.h"

int	disorder(t_ps *ps)
{
	int	mistake;
	int	total_paris;
	int	i;
	int	j;

	mistake = 0;
	total_paris = 0;
	while (i < ps->a.size)
	{
		total_paris++;
		while (j < ps->a.size + i++)
		{
			if(ps->a.size[a] > ps->a.size[j])
				mistake++;
		}
	}
	return (mistake / total_paris)
}
