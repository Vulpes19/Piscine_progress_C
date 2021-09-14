/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:49:42 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/26 09:42:33 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*tab;

	len = max - min;
	i = 0;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * len);
	if (tab == NULL)
		return (0);
	while (i < len)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
