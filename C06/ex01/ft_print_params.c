/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:26:51 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/17 14:32:43 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	pos;

	pos = 1;
	while (pos < argc)
	{
		i = 0;
		while (argv[pos][i] != '\0')
		{
			write(1, &argv[pos][i], 1);
			i++;
		}
		write(1, "\n", 1);
		pos++;
	}
	return (0);
}
