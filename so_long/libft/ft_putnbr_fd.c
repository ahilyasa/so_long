/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:08:48 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/20 18:26:43 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Integer ‘n’ değerinin çıktısını verilen file descriptora yazar.
 #1. Çıkışa verilecek integer değeri.
 #2. Yazılacak olan file descriptor.*/
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}
/*#include <unistd.h>
int	main()
{
	ft_putnbr_fd(3, 1);
}*/
