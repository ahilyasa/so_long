/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 01:58:25 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/21 20:50:43 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*s dizesinden bir alt dize döndürür.
 Malloc fonksiyonu kullanılarak memoryde hafıza ayırılır ve
 belirtilen substringi döner. Substring başlangıç indisinden
 başlar ve maksimum boyutuna kadar devam eder
 #1. Substringin oluşturalacağı string.
 #2. Substringin ana string içerisindeki başlangıç indisi.
 #3. Substringin maksimum uzunluğu*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buf;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	buf = (char *)malloc(sizeof(char) * len + 1);
	if (!buf)
		return (0);
	ft_strlcpy(buf, s + start, len + 1);
	return (buf);
}
/*#include <stdio.h>
int	main()
{
	char	s[] = "ilknur";

	printf("%s\n", ft_substr(s, 2, 5));
}*/
