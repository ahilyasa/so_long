/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:58:56 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/20 18:20:34 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*File descriptora ‘c’ karakterinin çıktısını yazar.
 #1. Çıkış karakteri.
 #2. Üzerine yazılacak olan file descriptor.*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <unistd.h>
int	main()
{

	ft_putchar_fd('A', 1);
}*/
