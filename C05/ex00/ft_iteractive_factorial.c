#include <stdio.h>

int	ft_iteractive_factorial(int nb)
{
	unsigned int	n;

	while (nb > 0)
	{
		n *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (n);
}

/*int	main()
{
	int n;
	n = ft_iteractive_factorial(4);
	printf("%d\n", n);
}*/
