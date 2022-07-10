#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	       return (0);
	if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main()
{
	int n;
	n = ft_recursive_factorial(3);
	printf("%d\n", n);
}*/
