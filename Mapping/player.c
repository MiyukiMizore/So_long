/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:47:16 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/15 12:43:52 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

void	player(t_minilibx *game, int x, int y)
{
	void	*img_ptr;

	img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, "items/n.xpm",
			&game->x_item, &game->y_item);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, img_ptr,
		y * 47, x * 47);
	game->x_player = x;
	game->y_player = y;
}
