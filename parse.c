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

int	check_arg(int argc, char **argv)
{
	if (ft_strncmp(argv[1], "--", 2) == 0)
		argc--;
	if (argc == 2)
	{
		char **format;
		int result;
		format = ft_split(argv[2]);
		result = check_number(format, 0);
		if (result == 0)
			display_error();
		check_flag();
	}
	else if (argc > 2)
	{
		int	result;
		result = check_number(argv[2][0], 1);
		if (result == 0)
			display_error();
		check_flag();
	}
}

int	check_number(char **number, int start)
{
	// check for dup, char, range
	// start (0, 1) for where the function will start
}

char	display_error()
{
	write(1,"Error\n",6);
	return (0);
	// print error and end program
}

int	check_flag()
{
	if (ft_strncmp(argv[1], "--simple", 8) == 0)
		simple();
	else if (ft_strncmp(argv[1], "--medium", 8) == 0)
		medium();
	else if (ft_strncmp(argv[1], "--complex", 9) == 0)
		complex();
	else if (ft_strncmp(argv[1], "--adaptive", 9) == 0)
		adaptive();
	else
		return (0);
}
