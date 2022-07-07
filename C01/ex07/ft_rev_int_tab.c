/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:49:28 by lda-cunh          #+#    #+#             */
/*   Updated: 2022/07/02 14:00:30 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size -1];
		tab[size -1] = tmp;
		size--;
		i++;
	}
}

/*int	main()
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size;
	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/
