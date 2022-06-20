/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hata.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <iyarikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 02:08:38 by iyarikan          #+#    #+#             */
/*   Updated: 2022/04/09 01:19:49 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	file_error(t_game *game)
{
	(void)game;
	ft_printf("Error\n File Error.");
	exit(1);
}

void	malloc_error(t_game *game, int fd)
{
	(void)game;
	ft_printf("Error\n Malloc Error");
	close (fd);
	exit(1);
}

void	split_error(t_game *game)
{
	ft_printf("Error\n Split_Error");
	free(game->buff);
	exit(1);
}

void	err(t_game *game, char sgn_err)
{
	if (sgn_err == '0')
		ft_printf("Error\n Row Error");
	else if (sgn_err == '1')
		ft_printf("Error\n Wall Error");
	else if (sgn_err == '2')
		ft_printf("Error\n Chars Error");
	else if (sgn_err == '3')
		ft_printf("Error\n Rectangle_Error");
	else if (sgn_err == '4')
		ft_printf("Error\n Img Malloc Error");
	free_map(game);
	free(game->buff);
	exit(1);
}
