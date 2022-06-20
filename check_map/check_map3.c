/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 06:55:54 by jdutschk          #+#    #+#             */
/*   Updated: 2022/06/13 17:51:28 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/so_long.h"

int	first_check_line(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\n')
	{
		if (str[i] != '1')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	verif_line(char *str)
{
	int	i;

	i = ft_strlen(str) - 2;
	if (str[0] == '1' && str[i] == '1')
		return (0);
	return (1);
}

int	last_line_verif(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '1')
			return (1);
		i++;
	}
	return (0);
}

int	check_map3(char *map)
{
	int		i;
	int		fd;
	char	*line;

	i = 1;
	fd = open(map, O_RDONLY);
	if (fd == 0 || fd == -1)
		return (ft_printf("Fd error %s\n", map));
	line = get_next_line(fd);
	if (first_check_line(line) == 1)
		return (ft_printf("First line  false in %s \n  %s\n", map, line));
	while (line)
	{
		if (verif_line(line) == 1)
			return (ft_printf("Error line %d  in %s\n at : %s\n", i, map, line));
		line = get_next_line(fd);
		if (line[ft_strlen(line) - 1] != '\n')
			break ;
		i++;
	}
	if (last_line_verif(line) == 1)
		return (ft_printf("Last line  false in %s \n%s\n", map, line));
	close(fd);
	free(line);
	return (check_map4(map));
}
