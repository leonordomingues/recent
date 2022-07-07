#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1) // n começa a contar em 1 e tem de ser 0
		i++;
	return (s1[i] - s2[i]);
}

/*int	main()
{
	int	nmb;
	char s1[] = "olaaaaaaaa";
	char s2[] = "olaalaaaaa";
	nmb = ft_strncmp(s1, s2, 7);
	printf("%d\n", nmb);
}*/
