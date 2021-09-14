/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:42:55 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/07 16:18:42 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c, char a, char n);

void	per(char c);

void	put(char a, char b);

void	ft_print_comb(void)
{
	char	z;
	char	one;
	char	two;

	z = '0';
	while (z < '8')
	{
		one = z + 1;
		while (one <= '8')
		{
			two = one + 1;
			while (two <= '9')
			{
				print(z, one, two);
				if (z < '7')
				{
					put(',', ' ');
				}
				two++;
			}
			one++;
		}
		z++;
	}
}

void	print(char c, char a, char b)
{
	write(1, &c, 1);
	write(1, &a, 1);
	write(1, &b, 1);
}

void	per(char c)
{
	write(1, &c, 1);
}

void	put(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}
