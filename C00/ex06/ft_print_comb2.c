/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 09:05:24 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/08 12:07:58 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_p(char c);

void	ft_print_comb2(void)
{
	int		first;
	int		sec;

	first = 0;
	while (first < 99)
	{
		sec = first + 1;
		while (sec <= 99)
		{
			ft_p(first / 10 + '0');
			ft_p(first % 10 + '0');
			ft_p(' ');
			ft_p(sec / 10 + '0');
			ft_p(sec % 10 + '0');
			 if (! (first == 98 && sec == 99))
				write(1, ", ", 2);
			sec++;
		}
		first++;
	}
}

void	ft_p(char c)
{
	write(1, &c, 1);
}
