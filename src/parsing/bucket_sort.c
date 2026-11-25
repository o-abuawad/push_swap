/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bucket_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osama </var/spool/mail/osama>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:07:39 by osama             #+#    #+#             */
/*   Updated: 2026/11/16 15:10:24 by osama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	bucket_sort(t_stack *a, t_stack *b)
{
	int	chunk;

	if (!a || !a->size <= 1)
		return ;
	if (!assign_index(a))
		return ;
	if (a->size <= 100)
		chunk = 15;
	else
		chunk = 35;
	push_to_b(a, b, chunk);
	push_back(a, b);
}
