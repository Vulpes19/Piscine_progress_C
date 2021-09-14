#include <unistd.h>
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int	main(int argc, char **argv)
{
	int	len;
	int	count;
	int	i;
	int	j;

	i = 0;
	count = 0;
	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		while (argv[1][i] != '\0')
		{
			j = 0;
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
					count++;
				j++;
			}
			i++;
		}
	}
	if (count == len)
		ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
