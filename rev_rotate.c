/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:09:13 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/02 11:11:07 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rev_rotate(t_stack *s)
{
	t_node	*last;

	if (!s || s->size < 2)
		return ;
	last = ft_lstlast(s);
	last->next = s->head;
	last = ft_lstlast(s);
	last->next = NULL;
}
