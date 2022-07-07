/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:47:28 by lda-cunh          #+#    #+#             */
/*   Updated: 2022/07/02 13:47:38 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (*b != 0)
	{
		tmp = *a / *b;
		*b = *a % *b;
		*a = tmp;
	}
}

/*int	main()
{
	int	c;
	int	d;
	int	*a;
	int	*b;

	c = 42;
	d = 10;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
	printf("divisão:%d\n", *a);
	printf("resto:%d\n", *b);
}*/
