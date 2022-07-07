/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:33:14 by lda-cunh          #+#    #+#             */
/*   Updated: 2022/07/06 16:15:31 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	i;

	a = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (a && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!a && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			a = 0;
		}
		else
			a = 1;
		i++;
	}
	return (str);
}

/*int	main()
{
	char str[] = "hjiIHg jdS89a+iTp";
	ft_strcapitalize(str);
	printf("%s\n", str);
}*/
