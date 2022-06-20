/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map7.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:15:35 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/17 13:05:29 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

int	check_map7(char *map)
{
	int		fd;
	int		i;
	char	*line;

	i = 0;
	fd = open(map, O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		while (line[i] != '\0')
		{
			if (line[i] != '1' && line[i] != '0' && line[i] != 'C'
				&& line[i] != 'P' && line[i] != 'E' && line[i] != 'F'
				&& line[i] != 'G' && line[i] != '\n')
				return (ft_printf("character %c in the map\n", line[i]));
			i++;
		}
		free(line);
		line = get_next_line(fd);
		i = 0;
	}
	close(fd);
	return (0);
}
