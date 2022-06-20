/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:54:41 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/21 20:45:22 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*‘f’ fonksiyonun stringin her karakterine uygular. 
 Eğer gerekli olursa her karakter adresi ile gönderilmelidir
 #1. Üzerinde dolaşılacak string değeri.
 #2. Her karatere uyugulanacak fonksiyon.*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (*s)
		f(i++, s++);
}
/*void	f(unsigned int i, char *c)
{
	*c = *c + 1;
}
#include <stdio.h>
int	main()
{
	char	str[] = "aBcDeF";

	ft_striteri(str, f);
	printf("%s\n", str);
}*/
