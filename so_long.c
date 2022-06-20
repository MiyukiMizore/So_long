/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:40:02 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/20 17:09:00 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header/so_long.h"

int	pressed_mouse(void)
{
	ft_printf("Closing Program in progress\n");
	exit(0);
	return (0);
}

int	pressed_key(int key, void *param)
{
	if (key == 0 || key == 1 || key == 2 || key == 13
		|| key == 126 || key == 123 || key == 125 || key == 124)
		move(key, (t_minilibx *)param);
	if (key == 53)
	{
		ft_printf("\nEscape touch engaged\nClosing program in progress\n");
		free(param);
		ft_printf("Memory Free\n");
		exit(0);
	}	
	return (1);
}

t_minilibx	*init_game(char *argv)
{
	t_minilibx	*game;

	game = malloc(sizeof(t_minilibx));
	ft_printf("Initialization of the structure (game)\n");
	game->mlx_ptr = mlx_init();
	ft_printf("Initialization of the graphic connection\n");
	game->x = longueur(argv);
	game->y = hauteur(argv);
	game->map = print_map(argv);
	game->win_ptr = mlx_new_window(game->mlx_ptr, game->x, game->y, "so_long");
	ft_printf("Window initialization of so_long\n");
	return (game);
}

void	start(char *argv)
{
	t_minilibx	*game;

	game = init_game(argv);
	ft_printf("Start loop of mlx(t_minilibx *game)\n");
	read_map(game);
	mlx_key_hook(game->win_ptr, pressed_key, (void *) game);
	mlx_hook(game->win_ptr, 17, 1L << 0, pressed_mouse, (void *)0);
	mlx_loop(game->mlx_ptr);
}

int	main(int argc, char **argv)
{
	if ((check_map(argv[1])) || argc != 2)
		return (1);
	ft_printf("%s is valid\n", argv[1]);
	start(argv[1]);
	return (0);
}
