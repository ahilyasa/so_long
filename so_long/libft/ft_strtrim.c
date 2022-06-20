/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:36:43 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/21 20:52:12 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
'set' içinde ebelirtilen karakterlerin başından ve sonundan
kaldırıldığı bir s1 kopyasını döndürür.
Malloc kullanrak hafızada yer ayırılır ardından ana stringde
kırpılmak istenilen karakterlerin hepsi kırpılır sonuç
olarak elde edilen yeni string döndürülür.
 #1. Kırpılacak string.
 #2. Kırpılması istenen karakterler.*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	slen;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	slen = ft_strlen(s1);
	while (slen && ft_strchr(set, s1[slen]))
		--slen;
	return (ft_substr(s1, 0, slen + 1));
}
/*#include <stdio.h>
int	main()
{
	char	a[] = "2635ilk333nur23172";
	char	b[] = "1234567";

	printf("%s\n", ft_strtrim(a, b));
}*/
