/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:46:06 by abaioumy          #+#    #+#             */
/*   Updated: 2021/08/21 10:02:43 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);
void	print_param(char **str, int ac);

int	main(int argc, char **argv)
{
	int		i;
	int		pos1;
	int		pos;
	char	*temp;

	i = 0;
	pos = 1;
	while (pos < argc)
	{
		pos1 = pos + 1;
		while (argv[pos1] != '\0')
		{
			if (ft_strcmp(argv[pos], argv[pos1]) > 0)
			{
				temp = argv[pos1];
				argv[pos1] = argv[pos];
				argv[pos] = temp;
			}
			pos1++;
		}
		pos++;
	}
	print_param(argv, argc);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_param(char **str, int ac)
{
	int	i;
	int	pos;

	pos = 1;
	while (pos < ac)
	{
		i = 0;
		while (str[pos][i] != '\0')
		{
			write(1, &str[pos][i], 1);
			i++;
		}
		write(1, "\n", 1);
		pos++;
	}
}
