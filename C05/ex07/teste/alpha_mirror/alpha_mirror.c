#include <unistd.h>
int	main(int argc, char **argv)
{
	int	i;
	int	j;
	/*
	char *alph1;
	char *alph2;
	char *alphup1;
	char *alphup2;
	char *temp;*/

	char alph1[20] = "abcdefghijklm";
	char alph2[20] = "zyxwvutsrqpon";
	char alphup1[20] = "ABCDEFGHIJKLM";
	char alphup2[20] = "ZYXWVUTSRQPON";
	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			while (alph1[j] != '\0' && alph2[j] != '\0' && alphup1[j] != '\0' && alphup2[j] != '\0')
			{
				if (argv[1][i] == alph1[j])
				{
					write(1, &alph2[j], 1);
				}
				else if (argv[1][i] == alphup1[j])
				{
					write(1, &alphup2[j], 1);
				}
				else if (argv[1][i] == alph2[j])
				{
					write(1, &alph1[j], 1);
				}
				else if (argv[1][i] == alphup2[j])
				{
					write(1, &alphup1, 1);
				}
				j++;
			}
			write(1, &argv[1][i+1], 1);
		i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
