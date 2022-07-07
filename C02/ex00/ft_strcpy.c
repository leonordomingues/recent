/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:05:55 by lda-cunh          #+#    #+#             */
/*   Updated: 2022/07/06 16:08:20 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main()
{
	char src[] = "esta";
	char dest[] = "certo";
	char src1[] = "esta";
	char dest1[] = "certo";
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	strcpy(dest1, src1);
	printf("%s\n", dest1);
}*/
