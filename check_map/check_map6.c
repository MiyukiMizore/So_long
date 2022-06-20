/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map6.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:11:45 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/13 17:51:44 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

int	check_map6(char *map)
{
	int	player;
	int	item;
	int	exit;

	player = check_player(map);
	if (player == 0)
		return (ft_printf("No player\n"));
	if (player > 1)
		return (ft_printf("Too many players\n"));
	item = check_item(map);
	if (item == 0)
		return (ft_printf("No item\n"));
	exit = check_exit(map);
	if (exit == 0)
		return (ft_printf("No exit\n"));
	if (exit > 1)
		return (ft_printf("Too much exit\n"));
	return (check_map7(map));
}

int	check_player(char *map)
{
	int		fd;
	int		i;
	int		cmpt;
	char	*line;

	fd = open(map, O_RDONLY);
	i = 0;
	cmpt = i;
	line = get_next_line(fd);
	while (line[i++])
	{
		if (line[i] == 'P')
			cmpt++;
		if (line[i] == '\n')
		{
			free(line);
			line = get_next_line(fd);
			i = 0;
		}
	}
	close(fd);
	free(line);
	return (cmpt);
}

int	check_item(char *map)
{
	int		fd;
	int		i;
	int		cmpt;
	char	*line;

	fd = open(map, O_RDONLY);
	i = 0;
	cmpt = i;
	line = get_next_line(fd);
	while (line[i++])
	{
		if (line[i] == 'C')
			cmpt++;
		if (line[i] == '\n')
		{
			free(line);
			line = get_next_line(fd);
			i = 0;
		}
	}
	close(fd);
	free(line);
	return (cmpt);
}

int	check_exit(char *map)
{
	int		fd;
	int		i;
	int		cmpt;
	char	*line;

	fd = open(map, O_RDONLY);
	i = 0;
	cmpt = i;
	line = get_next_line(fd);
	while (line[i++])
	{
		if (line[i] == 'E')
			cmpt++;
		if (line[i] == '\n')
		{
			free(line);
			line = get_next_line(fd);
			i = 0;
		}
	}
	close(fd);
	free(line);
	return (cmpt);
}
