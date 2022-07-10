#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (n * ft_recursive_power (nb, (power - 1)));
	else
		return (n);
}

/*int	main()
{
	printf("%d\n", ft_recursive_power(1, 1));
}*/
