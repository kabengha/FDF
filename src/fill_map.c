/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabengha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:59:19 by kabengha          #+#    #+#             */
/*   Updated: 2020/01/25 23:00:52 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static int		ft_nb_words(char const *s, char c)
{
	int		i;
	size_t	k;
	size_t	len;

	len = (size_t)ft_strlen(s);
	k = 0;
	i = 0;
	while (k < len)
	{
		if (s[k] != c)
			if (s[k + 1] == c || s[k + 1] == '\0')
				i++;
		k++;
	}
	return (i);
}

static	int		get_nb_column(char **line)
{
	int			i;

	i = 0;
	while (line[i])
		i++;
	return (i);
}

static	void	init_nb_line_column(char *file, t_map *map)
{
	int			fd;
	int			count;
	char		*line;

	count = 0;
	fd = open(file, O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		if (count == 0)
			(*map).nb_column = ft_nb_words(line, ' ');
		count++;
	}
	(*map).nb_line = count;
	(*map).map = (int **)malloc(sizeof(int *) * count);
	close(fd);
}

static	int		remplire_line_map(t_map *m, char **res, int i)
{
	int			j;

	if (get_nb_column(res) >= (*m).nb_column)
		(*m).map[i] = (int *)malloc(sizeof(int) * (*m).nb_column);
	else
		return (-1);
	j = 0;
	while (res[j])
	{
		(*m).map[i][j] = ft_atoi(res[j]);
		j++;
	}
	return (1);
}

t_map			remplir_file(char *file, t_map map)
{
	char		*line;
	char		**res_line;
	int			i;
	int			fd;

	i = 0;
	init_nb_line_column(file, &map);
	fd = open(file, O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		res_line = ft_strsplit(line, ' ');
		remplire_line_map(&map, res_line, i);
		i++;
	}
	close(fd);
	return (map);
}
