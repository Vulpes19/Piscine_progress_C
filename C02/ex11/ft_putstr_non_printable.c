/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 08:49:53 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/12 09:45:19 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	div;
	int	mod;
	int	len;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			write(1, "\\", 1);
			printchar("0123456789abcdef"[str[i] / 16]);
			printchar("0123456789abcdef"[str[i] % 16]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	printchar(char c)
{
	write(1, &c, 1);
}
