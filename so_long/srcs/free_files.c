/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <iyarikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 01:59:25 by iyarikan          #+#    #+#             */
/*   Updated: 2022/04/09 00:12:36 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_imgs(t_game *game)
{
	int	i;

	i = 0;
	while (i < 7)
		mlx_destroy_image(game->mlx, game->imgs[i++]);
}

void	free_buff(t_game *game)
{
	free(game->buff);
}

void	free_map(t_game *game)
{
	int	i;

	i = 0;
	while (game->map[i])
		free(game->map[i++]);
	free(game->map);
}

void	free_last(t_game *game)
{
	free_map(game);
	free_buff(game);
	free_imgs(game);
	mlx_destroy_window(game->mlx, game->win);
	system("leaks so_long");
	exit(0);
}
