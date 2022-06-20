/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:24:38 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/14 18:10:59 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

char	**print_map(char *map)
{
	char	**newmap;
	int		i;
	char	*line;
	int		fd;

	fd = open(map, O_RDONLY);
	newmap = malloc(sizeof(char *) * (hauteur(map)) + 1);
	i = 0;
	line = get_next_line(fd);
	while (line)
	{
		newmap[i] = line;
		line = get_next_line(fd);
		i++;
	}
	newmap[i] = NULL;
	close(fd);
	return (newmap);
}
