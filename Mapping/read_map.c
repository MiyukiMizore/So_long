/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:33:57 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/20 13:28:28 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

void	ennemy(t_minilibx *game, char c, int y, int x)
{
	if (c == 'F')
		ennemy_1(game, y, x);
	else
		ennemy_2(game, y, x);
}

void	wall_road(t_minilibx *game, char c, int y, int x)
{
	if (c == '1')
		wall(game, y, x);
	else
		ground(game, y, x);
}

void	player_door(t_minilibx *game, char c, int y, int x)
{
	if (c == 'P')
		player(game, y, x);
	else
		door(game, y, x);
}

void	read_map(t_minilibx *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (game->map[y])
	{
		while (game->map[y][x])
		{
			if (game->map[y][x] == '1' || game->map[y][x] == '0')
				wall_road(game, game->map[y][x], y, x);
			if (game->map[y][x] == 'P' || game->map[y][x] == 'E')
				player_door(game, game->map[y][x], y, x);
			if (game->map[y][x] == 'C')
				collectable(game, y, x);
			if (game->map[y][x] == 'S')
				door_open(game, y, x);
			if (game->map[y][x] == 'F' || game->map[y][x] == 'G')
				ennemy(game, game->map[y][x], y, x);
			x++;
		}
		y++;
		x = 0;
	}
}
