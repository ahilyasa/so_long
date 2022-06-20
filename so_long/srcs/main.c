/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <iyarikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:30:16 by iyarikan          #+#    #+#             */
/*   Updated: 2022/04/09 01:29:33 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	make_img(t_game *game)
{
	game->imgs = (void **)malloc(sizeof(void *) * 7);
	if (!game->imgs)
		err(game, '4');
	game->imgs[0] = mlx_xpm_file_to_image(game->mlx, \
			"./assets/wall.xpm", &game->imgx, &game->imgy);
	game->imgs[1] = mlx_xpm_file_to_image(game->mlx, \
			"./assets/on.xpm", &game->imgx, &game->imgy);
	game->imgs[2] = mlx_xpm_file_to_image(game->mlx, \
			"./assets/collectables.xpm", &game->imgx, &game->imgy);
	game->imgs[3] = mlx_xpm_file_to_image(game->mlx, \
			"./assets/exit.xpm", &game->imgx, &game->imgy);
	game->imgs[4] = mlx_xpm_file_to_image(game->mlx, \
			"./assets/sag.xpm", &game->imgx, &game->imgy);
	game->imgs[5] = mlx_xpm_file_to_image(game->mlx, \
			"./assets/sol.xpm", &game->imgx, &game->imgy);
	game->imgs[6] = mlx_xpm_file_to_image(game->mlx, \
			"./assets/arka.xpm", &game->imgx, &game->imgy);
}

void	location(t_game *game, int x, int y, int i)
{
	while (game->buff[i])
	{
		if (game->buff[i] == '1')
			mlx_put_image_to_window(game->mlx, game->win, game->imgs[0], x, y);
		if (game->buff[i] == 'P')
		{
			mlx_put_image_to_window(game->mlx, game->win, game->char_pos, x, y);
			game->char_index = i;
		}
		if (game->buff[i] == 'C')
			mlx_put_image_to_window(game->mlx, game->win, game->imgs[2], x, y);
		if (game->buff[i] == 'E')
			mlx_put_image_to_window(game->mlx, game->win, game->imgs[3], x, y);
		if (game->buff[i] == '\n')
		{
			x = -64;
			y += 64;
		}
		x += 64;
		i++;
	}
}

void	map_change(t_game *game)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 0;
	i = 0;
	location(game, x, y, i);
}

void	map_control(t_game *game, char *s)
{
	int	fd;
	int	i;

	if (ber_control(s))
		file_error(game);
	fd = open(s, O_RDONLY);
	if (fd < 0)
		file_error(game);
	game->buff = malloc(9999);
	if (!game->buff)
		malloc_error(game, fd);
	i = read(fd, game->buff, 9998);
	game->buff[i] = '\0';
	close(fd);
	game->map = ft_split(game->buff, '\n');
	if (!game->map)
		split_error(game);
	check_col_row(game);
	check_walls(game);
	check_chars(game);
	check_rectangle(game);
}

int	main(int ac, char **av)
{
	t_game	game;

	if (ac != 2)
		exit(1);
	game.total_moves = 0;
	game.mlx = mlx_init();
	map_control(&game, av[1]);
	game.win = mlx_new_window(game.mlx, game.x * 64, game.y * 64, "so_long");
	make_img(&game);
	game.char_pos = game.imgs[1];
	map_change(&game);
	mlx_hook(game.win, 2, 0, char_moves, &game);
	mlx_hook(game.win, 17, 1L << 17, close_game, &game);
	mlx_loop(game.mlx);
}
