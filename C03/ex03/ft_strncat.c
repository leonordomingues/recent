/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:17:37 by lda-cunh          #+#    #+#             */
/*   Updated: 2022/07/07 15:24:09 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	i;

	a = 0;
	i = 0;
	while (dest[a] != '\0')
		a++;
	while (i < nb  && src[i] != '\0')
	{
		dest[a] = src[i];
		a++;
		i++;
	}
	dest[a] = '\0';
	return (dest);
}
/*int	main()
{
	char dest[] = "esta ";
	char src[] = "string";

	ft_strncat(dest, src, 4);
	printf("%s\n", dest);
}*/
