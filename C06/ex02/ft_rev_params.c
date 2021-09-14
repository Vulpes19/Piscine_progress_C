/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:33:19 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/21 10:00:45 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	pos;

	pos = argc - 1;
	while (pos > 0)
	{
		i = 0;
		while (argv[pos][i] != '\0')
		{
			write(1, &argv[pos][i], 1);
			i++;
		}
		write(1, "\n", 1);
		pos--;
	}
	return (0);
}
