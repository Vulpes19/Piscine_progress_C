/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:11:56 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/08 17:15:55 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int revtab;
	int i;

	i = 0;
	revtab = 0;

	while (i <  size / 2)
	{
		revtab = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = revtab;
		i++;
		size--;
	}
}
int	main()
{
	int tab[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 5);
	printf("%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
   return 0;	
}
