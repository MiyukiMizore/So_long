/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   door_open.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:21:49 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/20 16:02:18 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

void	door_open(t_minilibx *game, int x, int y)
{
	void	*img_ptr;

	img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, "items/exit_open.xpm",
			&game->y_exit, &game->x_exit);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, img_ptr,
		y * 47, x * 47);
}

int	*check_dexit(t_minilibx *game)
{
	int	*cord;

	cord[0] = 0;
	cord[1] = 0;
	while (game->map[cord[0]])
	{
		while (game->map[cord[0]][cord[1]])
		{
			if (game->map[cord[0]][cord[1]] == 'E')
				return (cord);
			cord[1]++;
		}
		cord[0]++;
		cord[1] = 0;
	}
	return ((int *)1);
}
