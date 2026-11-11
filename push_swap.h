/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:02:52 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/02 11:05:42 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct	s_node {
	int	val;
	int	index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack {
	t_node	*head;
	int	size;
}	t_stack;

typedef enum e_mode
{
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE
}	t_mode;

typedef struct s_options
{
	t_mode	mode;
	int	bench;
}	t_options;

#endif // !PUSH_SWAP.H
