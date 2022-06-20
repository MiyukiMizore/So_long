/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ennemy_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:55:30 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/17 13:11:22 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

void	ennemy_1(t_minilibx *game, int x, int y)
{
	void	*img_ptr;

	img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, "items/reptincel.xpm",
			&game->x_item, &game->y_item);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, img_ptr,
		y * 47, x * 47);
}
