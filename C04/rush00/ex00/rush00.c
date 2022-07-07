/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocandid <jocandid@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:26:11 by jocandid          #+#    #+#             */
/*   Updated: 2022/07/03 17:26:14 by jocandid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putlen(int x, char a, char m, char z);

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x > 0 && y > 0)
	{
		while (i <= y)
		{
			if (i == 1)
				ft_putlen(x, 'o', '-', 'o');
			else if (i == y)
				ft_putlen(x, 'o', '-', 'o');
			else
				ft_putlen(x, '|', ' ', '|');
			i++;
		}
	}
}

void	ft_putlen(int x, char a, char m, char z)
{
	int	ii;

	ii = 1;
	while (ii <= x)
	{
		if (ii == 1)
			ft_putchar(a);
		else if (ii == x)
			ft_putchar(z);
		else
			ft_putchar(m);
		ii++;
	}
	ft_putchar('\n');
}
