/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:45:34 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/13 19:30:49 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

int	check_map(char *map)
{
	int		i;
	int		fd;
	char	*line;

	fd = open(map, O_RDONLY);
	i = 1;
	line = get_next_line(fd);
	if (ft_strlen_v2(line) < 3)
		return (ft_printf("Line %d too Short\n", i));
	while (line && ++i)
	{
		free(line);
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		if (ft_strlen_v2(line) < 3)
		{
			close(fd);
			free(line);
			return (ft_printf("Line %d too Short\n", i));
		}
	}
	free(line);
	close(fd);
	return (check_map2(map));
}
