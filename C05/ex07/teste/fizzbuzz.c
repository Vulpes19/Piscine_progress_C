#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main()
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 15 == 0)
		{
			write(1, "fizzbuzz", 8);
			//printf("fizzbuzz\t");
		}
		if (nb % 3 == 0)
		{
			write(1, "fizz", 4);
			//printf("fizz\t");
		}
		if (nb % 5 == 0)
		{
			write(1, "buzz", 4);
			//printf("buzz\t");
		}
		else
			ft_putchar(nb + '0');
			//printf("%d\t", nb);
		nb++;
	}
	return 0;
}
