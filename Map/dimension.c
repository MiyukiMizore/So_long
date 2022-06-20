/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dimension.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:14:06 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/15 11:10:23 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

int	longueur(char *map)
{
	int	fd;
	int	l;

	fd = open(map, O_RDONLY);
	l = ft_strlen_v2(get_next_line(fd));
	close(fd);
	return (l * 47);
}

int	hauteur(char *map)
{
	int	fd;
	int	h;

	h = 0;
	fd = open(map, O_RDONLY);
	while (get_next_line(fd))
		h++;
	close(fd);
	return (h * 47);
}
