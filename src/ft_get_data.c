/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 21:13:21 by ommadhi           #+#    #+#             */
/*   Updated: 2020/01/26 00:18:26 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int			ft_size_of_line(char **line)
{
	int i;

	i = 0;
	while (line[i])
		i++;
	return (i);
}

int			ft_count_lines(char *file)
{
	int		fd;
	char	*ptr;
	int		count;

	count = 0;
	fd = open(file, O_RDONLY);
	while (get_next_line(fd, &ptr) > 0)
	{
		count++;
		ft_strdel(&ptr);
	}
	close(fd);
	return (count);
}

int			ft_get_lent(char *file)
{
	int		fd;
	char	*str;
	char	**t;
	int		lent;

	fd = open(file, O_RDONLY);
	if (get_next_line(fd, &str) < 0)
		return (0);
	else
		t = ft_strsplit(str, ' ');
	lent = ft_size_of_line(t);
	ft_free_all(&t, NULL);
	if (lent == 0)
		return (0);
	close(fd);
	return (lent);
}

void		ft_get_data(char *file, t_map *mtab)
{
	char	**t;
	char	*str;
	int		fd;
	int		ij[2];

	ij[1] = 0;
	(*mtab).nb_line = ft_count_lines(file);
	(*mtab).nb_column = ft_get_lent(file);
	(*mtab).map = (int**)malloc(sizeof(int *) * (*mtab).nb_line);
	fd = open(file, O_RDONLY);
	(*mtab).zoom = 25;
	while (get_next_line(fd, &str) > 0)
	{
		ij[0] = -1;
		t = ft_strsplit(str, ' ');
		if ((*mtab).nb_column > ft_size_of_line(t) && ((*mtab).nb_column = -1))
			return ;
		(*mtab).map[ij[1]] = (int*)malloc(sizeof(int) * (*mtab).nb_column);
		while (++ij[0] < (*mtab).nb_column)
			(*mtab).map[ij[1]][ij[0]] = ft_atoi(t[ij[0]]);
		ft_free_all(&t, &str);
		ij[1]++;
	}
	close(fd);
}
