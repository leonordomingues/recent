/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:42:40 by lda-cunh          #+#    #+#             */
/*   Updated: 2022/07/07 16:44:59 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb == -2147483648)
		{
			ft_putchar ('-');
			ft_putchar ('2');
			ft_putnbr (147483648);
		}
		else if (nb < 0)
		{
			ft_putchar ('-');
			ft_putnbr (-nb);
		}
		else if (nb > 9)
		{
			ft_putnbr (nb / 10);
			ft_putnbr (nb % 10);
		}
		else
			ft_putchar (nb + '0');
	}
}

int	main()
{
	ft_putnbr (-2147483648);
}
