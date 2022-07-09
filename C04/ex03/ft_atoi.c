/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:46:21 by lda-cunh          #+#    #+#             */
/*   Updated: 2022/07/07 17:16:53 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	m;
	unsigned int	a;

	i = 0;
	m = 0;
	a = 0;
	while (str[i] >= 0 && str[i] <= 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = (a * 10) + (str[i] - '0');
		i++;
	}
	if ((m % 2) != 0)
		a = -a;
	return (a);
}

/*int	main()
{
	int a;
	char str[] = " ---+--+1234ab567";
	a = ft_atoi(str);
	printf("%d\n", a);
}*/

