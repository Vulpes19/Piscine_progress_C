/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 13:55:34 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/08 14:03:35 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int 	temp;
	int 	i;

	i = 0;
	temp = 0;
	while (i < size - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
		}
		i++;
	}
}
int	main()
{
	int tab[5] = {1, 4, 5, 2, 6};
	int size = 5;
	ft_sort_int_tab(tab, size);
	printf("%d%d%d%d%d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return 0;
}
