/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 00:47:25 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/20 16:25:28 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*buf;

	len = ft_strlen(s1);
	buf = malloc(len + 1);
	if (!buf)
		return (NULL);
	ft_strlcpy(buf, s1, len + 1);
	return (buf);
}
/*#include <stdio.h>
int	main()
{
	char	s1[] = "ilknur yarikan";

	printf("%s\n", ft_strdup(s1));
}*/
