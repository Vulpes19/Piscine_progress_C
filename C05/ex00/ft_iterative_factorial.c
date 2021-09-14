/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:37:51 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/22 16:39:03 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	a;

	fac = 1;
	a = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (a <= nb)
	{
		fac *= a;
		a++;
	}
	return (fac);
}
