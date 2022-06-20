/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 08:29:37 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/21 20:57:37 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Malloc kullanarak hafızada yer ayırılır ardından integer
 değerini temsil eden string döndürülür.
 Negatif sayılar negatif olarak döndürülmelidir
 #1. Dönüştürülecek olan integer değeri
 */
#include "libft.h"

static size_t	get_digits(int n)
{
	size_t	count;

	count = 0;
	if (n < 0 || n == 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		slen;
	const char	*digits;

	digits = "0123456789";
	slen = get_digits(n);
	str = (char *)malloc(sizeof(char) * (slen + 1));
	if (!str)
		return (0);
	str[slen] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n)
	{
		if (n > 0)
			str[--slen] = digits[n % 10];
		else
			str[--slen] = digits[n % 10 * -1];
		n /= 10;
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	printf("%s\n", ft_itoa(123));
}*/
