/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:52:57 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/13 17:51:32 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

int	check_map4(char *map)
{
	int		fd;
	int		len;
	int		len_2;
	char	*line;

	fd = open(map, O_RDONLY);
	line = get_next_line(fd);
	len = ft_strlen_v2(line);
	len_2 = len;
	while (len == len_2 && line)
	{
		free(line);
		line = get_next_line(fd);
		len_2 = ft_strlen_v2(line);
	}
	close(fd);
	free(line);
	if (len == 0)
		return (1);
	if (len_2 == 0)
		return (check_map5(map));
	else
		return (ft_printf("size error map\n"));
}
