/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:48:49 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/13 17:51:36 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

int	check_map5(char *map)
{
	int	i;

	i = ft_strlen(map);
	if (map[i - 1] == 'r')
		if (map[i - 2] == 'e')
			if (map [i - 3] == 'b')
				if (map [i - 4 == '.'])
					return (check_map6(map));
	return (ft_printf("DEHORS it's not a .ber\n"));
}
