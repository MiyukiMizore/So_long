/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:27:49 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/20 16:05:54 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

void	replace_exit(t_minilibx *game)
{
	static int	exiton = 0;

	if (exiton == 0)
		game->map[check_dexit(game)[0]][check_dexit(game)[1]] = 'S';
	exiton = 1;
}

void	move(int key, t_minilibx *game)
{
	static int	cmpt = 0;

	if (!read_collectable(game))
		replace_exit(game);
	if (key == 13 || key == 126)
		up(game);
	if (key == 0 || key == 123)
		left(game);
	if (key == 1 || key == 125)
		down(game);
	if (key == 2 || key == 124)
		right(game);
	cmpt++;
	ft_printf("%d move\n", cmpt);
	read_map(game);
}
