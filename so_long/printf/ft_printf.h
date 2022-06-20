/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <iyarikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:02:29 by iyarikan          #+#    #+#             */
/*   Updated: 2022/02/16 01:08:38 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_sayi_len(long sayi);
int	ft_putnbr(int nbr);
int	ft_format(char format, va_list argv);
int	ft_printf(const char *str, ...);
int	hex_base(unsigned long num, char x, int i);
#endif
