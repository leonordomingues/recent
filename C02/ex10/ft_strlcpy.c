/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:15:39 by lda-cunh          #+#    #+#             */
/*   Updated: 2022/07/06 16:16:37 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	i;

	a = 0;
	i = 0;
	while (src[a] != '\0')
		a++;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (a);
}

/*int	main()
{
	unsigned int	numb;

	char	dest[] = "destination";
	char	src[] = "source";

	numb = ft_strlcpy(dest, src, 10);
	printf("%d\n", numb);
	printf("%s\n", dest);
}*/
