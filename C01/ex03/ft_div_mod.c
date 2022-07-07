/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:46:50 by lda-cunh          #+#    #+#             */
/*   Updated: 2022/07/05 16:35:36 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main()
{
	int	c;
	int	d;
	int	*div;
	int	*mod;

	c = 0;
	d = 0;
	div = &c;
	mod = &d;
	ft_div_mod(42, 10, div, mod);
	printf("div:%d\n", *div);
	printf("mod:%d\n", *mod);
}*/
