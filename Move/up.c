/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:37:41 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/20 13:07:30 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

void	up(t_minilibx *game)
{
	char	tmp;

	if (game->map[game->x_player - 1][game->y_player] == '1'
		|| game->map[game->x_player - 1][game->y_player] == 'E')
		return ;
	if (game->map[game->x_player - 1][game->y_player] == 'F' ||
		game->map[game->x_player - 1][game->y_player] == 'G')
	{
		ft_printf("GAME OVER\n");
		exit(0);
	}
	if (game->map[game->x_player - 1][game->y_player] == 'S')
	{
		free(game);
		exit(0);
	}
	else
	{
		if (game->map[game->x_player - 1][game->y_player] == 'C')
			game->map[game->x_player - 1][game->y_player] = '0';
		tmp = game->map[game->x_player][game->y_player];
		game->map[game->x_player][game->y_player]
			= game->map[game->x_player - 1][game->y_player];
		game->map[game->x_player - 1][game->y_player] = tmp;
	}
}
