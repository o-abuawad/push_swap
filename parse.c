/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:27:47 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/09 13:39:54 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_flag(char *argv, s_options *options)
{
	if (!ft_strcmp(argv, "--simple"))
		options->mode = SIMPLE;
	else if (!ft_strcmp(argv, "--medium"))
		options->mode = MEDIUM;
	else if (!ft_strcmp(argv, "--complex"))
		options->mode = COMPLEX;
	else if (!ft_strcmp(argv, "--adaptive"))
		options->mode = ADAPTIVE;
	else if (!ft_strcmp(argv, "--bench"))
		options->bench = 1;
	else
		return(-1);
	return (0);
}

void	display_error()
{
	write(2,"Error\n",6);
	exit (1);
	// print error and end program
}

int	check_arg(int argc, char **argv, t_stack *a)
{
	t_options	options;
	int	i;
	int	start;
	int	num_ags;

	i = 1;
	while(i < argc && check_flag(argv[i], &options) == 0)
		i++;
	start = i;
	num_ags = argc - i;
	if (num_ags == 1)
	{
		char **format;
		int result;
		format = ft_split(argv[start] ,' '); //لازم اعمل فريي لل format
		result = parse_to_stack(format, 0, &a);
		if (result == 0)
			display_error();
	}
	else if (num_ags > 1)
	{
		int	result;
		result = parse_to_stack(argv, start, &a);
		if (result == 0)
			display_error();
	}
	else
		display_error();
	return(0);
}
