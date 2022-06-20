/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:07:44 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/21 20:51:24 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*'f’ fonksiyonunu ‘s’ stringinin bütün karakterlerine uygular.
 Değiştirlen stringden yeni bir string yaratılır.
 #1. Üzerinde dolaşılacak string değeri.
 #2. Her bir karaktere uyugulanacak fonksiyon.*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*nstring;
	size_t	nstringlen;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	nstringlen = ft_strlen(s);
	nstring = malloc(sizeof(char) * (nstringlen + 1));
	if (!nstring)
		return (NULL);
	while (*s)
	{
		nstring[i] = f(i, (char)*s);
		s++;
		i++;
	}
	nstring[i] = '\0';
	return (nstring);
}
/*#include <stdio.h>
char	f(unsigned int i, char c)
{
	return (c + 1);
}
int	main()
{
	char	*str;

	//str = "abcde";
	printf("%s\n", ft_strmapi("abc", f));
	//printf("%d\n" str);
}*/
