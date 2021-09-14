/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:09:29 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/22 16:39:16 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fact(int nbr, int a)
{
	if (nbr == 1)
		return (a);
	return (ft_fact(nbr - 1, a * nbr));
}

int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fact = ft_fact(nb, 1);
	return (fact);
}
