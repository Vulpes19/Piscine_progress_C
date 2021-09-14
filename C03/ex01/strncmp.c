/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:38:00 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/14 18:11:42 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] == s2[i])
				i++;
			else
				return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
int	main()
{
	printf("%d\n%d\n",strncmp("ayman", "", 0), ft_strncmp("Ayman", "Aykman", 0));
	return (0);
}
