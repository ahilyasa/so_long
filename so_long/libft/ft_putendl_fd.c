/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:45:24 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/21 20:46:56 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*‘s’ string çıktısını sonunda new line karakteri ile 
 birlikte verilen file descriptora yazar.
 #1. Çıkışa verilecek string.
 #2. Yazılacak olan file descriptor.*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*#include <unistd.h>
int	main()
{
	char s[] = "ilknur";

	ft_putendl_fd(s, 1);
}*/
