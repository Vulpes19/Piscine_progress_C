#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int	i;
	int	nb1;
	int	nb2;

	i = 0;
	if (argc == 4)
	{
		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[3]);
		if (argv[2][0] == '+')
		{
			printf("%d\n", nb1 + nb2);
		}
		if (argv[2][0] == '-')
		{
			printf("%d\n", nb1 - nb2);
		}
		if (argv[2][0] == '*')
		{
			printf("%d\n", nb1 * nb2);
		}
		if (argv[2][0] == '/')
		{
			printf("%d\n", nb1 / nb2);
		}
		if (argv[2][0] == '%')
		{
			printf("%d\n", nb1 % nb2);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
