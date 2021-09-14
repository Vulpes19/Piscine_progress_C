/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 09:25:06 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/22 16:39:44 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fib(int nbr, int a, int b)
{
	if (nbr == 0)
		return (a);
	if (nbr == 1)
		return (b);
	return (ft_fib(nbr - 1, b, a + b));
}

int	ft_fibonacci(int index)
{
	int	fib;

	if (index < 0)
		return (-1);
	fib = ft_fib(index, 0, 1);
	return (fib);
}
