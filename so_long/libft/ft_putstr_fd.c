/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:32:01 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/20 18:22:13 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*‘s’ stringini verilen file descriptor içerisine yazar
 #1. Çıkışa verilecek string.
 #2. Yazılacak olan file descriptor*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, s++, 1);
}
/*#include <unistd.h>
int	main()
{
	ft_putstr_fd("ilknur", 1);
}*/
