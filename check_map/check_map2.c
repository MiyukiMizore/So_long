/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:23:27 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/13 19:32:11 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

int	check_map2(char *map)
{
	int		i;
	int		fd;
	char	*line;
	char	*last_line;

	fd = open(map, O_RDONLY);
	line = get_next_line(fd);
	if (!line)
		return (ft_printf("Empty card\n"));
	while (line)
	{
		last_line = line;
		line = get_next_line(fd);
	}
	i = ft_strlen(last_line);
	if (last_line[i - 1] == '\n')
		return (ft_printf("Newline in the end\n"));
	return (check_map3(map));
}
