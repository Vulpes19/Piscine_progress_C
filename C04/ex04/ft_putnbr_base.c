/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:10:56 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/18 18:08:59 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		base_check(char *base, int len);
int		base_len(char *base);
void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	baselen;
	unsigned int	n;

	baselen = 0;
	baselen = base_len(base);
	if (base_check(base, baselen))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		n = nbr;
		if (n >= baselen)
		{
			ft_putnbr_base(n / baselen, base);
			ft_putnbr_base(n % baselen, base);
		}
		if (n < baselen)
			ft_putchar(base[n]);
	}
}

int	base_check(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (len == 1 || base[i] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_len(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
