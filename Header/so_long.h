/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:25:38 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/20 16:00:26 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <sys/wait.h>
# include "../Libft/libft.h"
# include "mlx.h"

//----------------Struct_Minilibx----------------//
typedef struct minilibx
{
	void	*mlx_ptr;
	void	*win_ptr;
	char	**map;
	int		x;
	int		y;
	int		x_item;
	int		y_item;
	int		x_player;
	int		y_player;
	int		x_exit;
	int		y_exit;
	int		cmpt;
}	t_minilibx;

//----------------Functions----------------//

void	start(char *argv);
int		main(int argc, char **argv);

//----------------Check_map----------------//

int		check_map(char *map);
int		check_map2(char *map);
int		check_map3(char *map);
int		check_map4(char *map);
int		check_map5(char *map);
int		check_map6(char *map);
int		check_map7(char *map);
int		first_check_line(char *str);
int		last_line_verif(char *str);
int		verif_line(char *str);
int		check_player(char *map);
int		check_item(char *map);
int		check_exit(char *map);

//----------------Size----------------//

int		longueur(char *map);
int		hauteur(char *map);
int		*check_dexit(t_minilibx *game);

//----------------Mapping----------------//
void	read_map(t_minilibx *game);
void	wall_road(t_minilibx *game, char c, int y, int x);
void	wall(t_minilibx *game, int x, int y);
void	ground(t_minilibx *game, int x, int y);
void	collectable(t_minilibx *game, int x, int y);
void	player(t_minilibx *game, int x, int y);
void	door(t_minilibx *game, int x, int y);
char	**print_map(char *map);
int		read_collectable(t_minilibx *game);
void	door_open(t_minilibx *game, int x, int y);
void	ennemy_1(t_minilibx *game, int x, int y);
void	ennemy_2(t_minilibx *game, int x, int y);

//----------------Move----------------//
void	move(int key, t_minilibx *game);
void	up(t_minilibx *game);
void	down(t_minilibx *game);
void	left(t_minilibx *game);
void	right(t_minilibx *game);

#endif