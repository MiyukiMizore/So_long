/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_collectable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:26:13 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/20 12:08:31 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

int	read_collectable(t_minilibx *game)
{
	int	x;
	int	y;
	int	cmpt;

	cmpt = 0;
	x = 0;
	y = 0;
	while (game->map[y])
	{
		while (game->map[y][x])
		{
			if (game->map[y][x] == 'C')
				cmpt++;
			x++;
		}
		y++;
		x = 0;
	}
	return (cmpt);
}
