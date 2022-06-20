/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   door.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:48:19 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/20 15:56:45 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

void	door(t_minilibx *game, int x, int y)
{
	void	*img_ptr;

	img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, "items/exit_close.xpm",
			&game->x_item, &game->y_item);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, img_ptr,
		y * 47, x * 47);
	game->y_exit = y;
	game->x_exit = x;
}
