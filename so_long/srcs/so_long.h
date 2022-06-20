/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <iyarikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:31:29 by iyarikan          #+#    #+#             */
/*   Updated: 2022/04/09 01:27:23 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include "../mlx/mlx.h"
# include "../libft/libft.h"
# include "../printf/ft_printf.h"

typedef struct s_game {
	void	*mlx;
	void	*win;
	void	**imgs;
	int		x;
	int		y;
	int		imgx;
	int		imgy;
	char	**map;
	char	*buff;
	int		char_index;
	int		score;
	int		collectables;
	int		total_moves;
	void	*char_pos;

}				t_game;

char	**ft_split(char const *s, char c);
int		ft_printf(const char *str, ...);
void	free_last(t_game *game);
void	file_error(t_game *game);
void	free_map(t_game *game);
void	malloc_error(t_game *game, int fd);
void	split_error(t_game *game);
void	check_col_row(t_game *game);
void	check_walls(t_game *game);
void	check_chars(t_game *game);
void	check_rectangle(t_game *game);
int		ber_control(char *s);
void	err(t_game *game, char sgn_err);
void	finish_game(t_game *game);
int		close_game(t_game *game);
void	map_change(t_game *game);
int		char_moves(int keycode, t_game *game);
void	free_buff(t_game *game);
void	free_imgs(t_game *game);

#endif
