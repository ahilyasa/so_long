/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 03:27:58 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/21 20:46:27 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*s1 ve s2 dizesinin birleşimi olan yeni bir dize döndürür.
 * Malloc kullanrak hafızadan bir parça ayırılır ve 
çıktı olarak s1 ve s2 stringlerinin birleştirilmiş hali döndürülür.
 #1. Ön ek stringi
 #2. Son ek stringi*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	newstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstr)
		return (0);
	while (*s1)
		newstr[i++] = *s1++;
	while (*s2)
		newstr[i++] = *s2++;
	newstr[i] = '\0';
	return (newstr);
}
/*#include <stdio.h>

int	main()
{
	char	a[] = "ilknur";
	char	b[] = "yarikan";

	printf("%s\n", ft_strjoin(a, b));
}*/
