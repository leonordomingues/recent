#include <stdio.h>

int	ft_iteractive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		n = n * nb;
		power--;
	}
	return (n);
}

int	main()
{
	int	n;

	n = ft_iteractive_power(1, 1);
	printf("%d\n", n);
}
