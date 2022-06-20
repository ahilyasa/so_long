/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keycode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <iyarikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:40:09 by iyarikan          #+#    #+#             */
/*   Updated: 2022/04/09 01:14:30 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	keycode_a(t_game *game)
{
	if (game->buff[game->char_index - 1] == 'C')
			game->score++;
	else if (game->buff[game->char_index - 1] == 'E')
	{
		finish_game(game);
		return (0);
	}
	game->char_pos = game->imgs[5];
	game->buff[game->char_index - 1] = 'P';
	game->buff[game->char_index] = '0';
	ft_printf("Total Moves: %d\n", ++game->total_moves);
	mlx_clear_window(game->mlx, game->win);
	map_change(game);
	return (0);
}

int	keycode_s(t_game *game)
{
	if (game->buff[game->char_index + game->x + 1] == 'C')
			game->score++;
	else if (game->buff[game->char_index + game->x + 1] == 'E')
	{
		finish_game(game);
		return (0);
	}
	game->char_pos = game->imgs[1];
	game->buff[game->char_index + game->x + 1] = 'P';
	game->buff[game->char_index] = '0';
	ft_printf("Total Moves: %d\n", ++game->total_moves);
	mlx_clear_window(game->mlx, game->win);
	map_change(game);
	return (0);
}

int	keycode_d(t_game *game)
{
	if (game->buff[game->char_index + 1] == 'C')
		game->score++;
	else if (game->buff[game->char_index + 1] == 'E')
	{
		finish_game(game);
		return (0);
	}
	game->char_pos = game->imgs[4];
	game->buff[game->char_index + 1] = 'P';
	game->buff[game->char_index] = '0';
	ft_printf("Total Moves: %d\n", ++game->total_moves);
	mlx_clear_window(game->mlx, game->win);
	map_change(game);
	return (0);
}

int	char_moves(int keycode, t_game *game)
{
	if (keycode == 0 && game->buff[game->char_index - 1] != '1')
		keycode_a(game);
	else if (keycode == 1 && game->buff[game->char_index + game->x + 1] != '1')
		keycode_s(game);
	else if (keycode == 2 && game->buff[game->char_index + 1] != '1')
		keycode_d(game);
	else if (keycode == 13 && game->buff[game->char_index - game->x - 1] != '1')
	{
		if (game->buff[game->char_index - game->x - 1] == 'C')
			game->score++;
		else if (game->buff[game->char_index - game->x - 1] == 'E')
		{
			finish_game(game);
			return (0);
		}
		game->char_pos = game->imgs[6];
		game->buff[game->char_index - game->x - 1] = 'P';
		game->buff[game->char_index] = '0';
		ft_printf("Total Moves: %d\n", ++game->total_moves);
	}
	else if (keycode == 53)
		close_game(game);
	mlx_clear_window(game->mlx, game->win);
	map_change(game);
	return (0);
}
