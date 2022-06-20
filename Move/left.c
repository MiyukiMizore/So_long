/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:39:20 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/20 13:07:45 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

void	left(t_minilibx *game)
{
	char	tmp;

	if (game->map[game->x_player][game->y_player - 1] == '1'
		|| game->map[game->x_player][game->y_player - 1] == 'E')
		return ;
	if (game->map[game->x_player][game->y_player - 1] == 'F' ||
		game->map[game->x_player][game->y_player - 1] == 'G')
	{
		ft_printf("GAME OVER\n");
		exit(0);
	}
	if (game->map[game->x_player][game->y_player - 1] == 'S')
	{
		free(game);
		exit(0);
	}
	else
	{
		if (game->map[game->x_player][game->y_player - 1] == 'C')
			game->map[game->x_player][game->y_player - 1] = '0';
		tmp = game->map[game->x_player][game->y_player];
		game->map[game->x_player][game->y_player]
			= game->map[game->x_player][game->y_player - 1];
		game->map[game->x_player][game->y_player - 1] = tmp;
	}
}
