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
	int	tmp_val;
	int	tmp_index;

	if (!s || s->size < 2)
		return ;
	tmp_val = s->head->val;
	tmp_index = s->head->index;
	s->head->val = s->head->next->val;
	s->head->index = s->head->next->index;
	s->head->next->val = tmp_val;
	s->head->next->index = tmp_index;
}
