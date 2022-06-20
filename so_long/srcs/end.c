/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <iyarikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:54:39 by iyarikan          #+#    #+#             */
/*   Updated: 2022/04/09 01:11:01 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	close_game(t_game *game)
{
	free_map(game);
	free_buff(game);
	free_imgs(game);
	mlx_destroy_window(game->mlx, game->win);
	system("leaks so_long");
	exit(1);
}

void	finish_game(t_game *game)
{
	(void)game;
	if (game->collectables == game->score)
	{	
		free_last(game);
	}
}
