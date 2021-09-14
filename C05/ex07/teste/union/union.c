#include <unistd.h>
int	check_double(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return (1);

}

int check2(char *av1, char av2)
{
	int	i;
	int	j;

	i = 0;
	while (av1[i])
	{
		if (av1[i] == av2)
			return 0;	
		i++;
	}
	return 1;
}

int	main(int argc, char **argv)
{
	int	i;
	int	pos;
	int	j;

	i = 0;
	pos = 1;
	while (argv[1][i] != '\0')
	{
		j = 0;
		while (argv[2][j] != '\0')
		{
			if (check_double(argv[1], argv[1][i], i))
			{
				write(1, &argv[1][i], 1);
				break;
			}
			j++;
		}
	 	i++;
	}
	i = 0;
	while (argv[2][i] != '\0')
	{
		j = 0;
		while (argv[1][j] != '\0')
		{
			if (check2(argv[1], argv[2][i]))			
			{	
				if (check_double(argv[2], argv[2][i], i))
				{
					write(1, &argv[2][i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}
