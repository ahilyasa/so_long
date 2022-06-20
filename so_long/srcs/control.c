/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kontrol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <iyarikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:01:24 by iyarikan          #+#    #+#             */
/*   Updated: 2022/04/09 01:17:11 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
//line = y
//column = x
void	check_col_row(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	game->y = 0;
	while (game->map[i++])
		game->y++;
	i = 0;
	game->x = 0;
	while (game->map[0][i++])
		game->x++;
	i = 1;
	while (i < game->y)
	{
		j = ft_strlen(game->map[i]);
		if (j != game->x)
			err(game, '0');
		i++;
	}
}

void	check_walls(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (i == 0 || i == game->y - 1)
			{
				if (game->map[i][j] != '1')
					err(game, '1');
			}
			else if (j == 0 || j == game->x - 1)
				if (game->map[i][j] != '1')
					err(game, '1');
			j++;
		}
		i++;
	}
}

void	check_chars(t_game *game)
{
	int	i;
	int	p;
	int	e;

	i = 0;
	p = 0;
	e = 0;
	game->collectables = 0;
	while (game->buff[i])
	{
		if (game->buff[i] == 'P')
			p++;
		else if (game->buff[i] == 'C')
			game->collectables++;
		else if (game->buff[i] == 'E')
			e++;
		else if (game->buff[i] != '0' && game->buff[i] != '1' \
		&& game->buff[i] != '\n')
			err(game, '2');
		i++;
	}
	if (p != 1 || e != 1 || game->collectables < 1)
		err(game, '2');
}

void	check_rectangle(t_game *game)
{
	int	i;
	int	count;

	count = 1;
	i = 0;
	while (game->buff[i])
	{
		if (game->buff[i] == '\n')
			count++;
		i++;
	}
	if (count != game->y)
		err(game, '3');
}

int	ber_control(char *s)
{
	while (*s)
		s++;
	s--;
	while (*s)
	{
		if (*s-- == 'r')
			if (*s-- == 'e')
				if (*s-- == 'b')
					if (*s == '.')
						return (0);
	}
	return (1);
}
