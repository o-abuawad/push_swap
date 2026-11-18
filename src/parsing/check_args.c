/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <oabu-awa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:40:00 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/11/16 12:40:00 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_error(void)
{
	write(2, "Error\n", 6);
}

static int	is_valid_flag(char *s)
{
	if (!s || s[0] != '-' || s[1] != '-')
		return (0);
	if (s[2] == 's' && s[3] == 'i' && s[4] == 'm' && s[5] == 'p' && s[6] == 'l'
		&& s[7] == 'e' && !s[8])
		return (1);
	if (s[2] == 'm' && s[3] == 'e' && s[4] == 'd' && s[5] == 'i' && s[6] == 'u'
		&& s[7] == 'm' && !s[8])
		return (1);
	if (s[2] == 'c' && s[3] == 'o' && s[4] == 'm' && s[5] == 'p' && s[6] == 'l'
		&& s[7] == 'e' && s[8] == 'x' && !s[9])
		return (1);
	if (s[2] == 'a' && s[3] == 'd' && s[4] == 'a' && s[5] == 'p' && s[6] == 't'
		&& s[7] == 'i' && s[8] == 'v' && s[9] == 'e' && !s[10])
		return (1);
	if (s[2] == 'b' && s[3] == 'e' && s[4] == 'n' && s[5] == 'c' && s[6] == 'h'
		&& !s[7])
		return (1);
	return (0);
}

int	check_flag(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] && is_valid_flag(argv[i]))
		i++;
	return (i);
}

static int	is_valid_num(char *s)
{
	int	i;

	i = 0;
	if (!s || !s[0])
		return (0);
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	check_arg(int argc, char **argv)
{
	int	i;

	i = check_flag(argv);
	if (i >= argc)
		return (0);
	while (i < argc)
	{
		if (!is_valid_num(argv[i]))
			return (0);
		i++;
	}
	return (1);
}
