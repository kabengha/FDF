/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:34:16 by ommadhi           #+#    #+#             */
/*   Updated: 2020/01/26 00:12:45 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void		ft_free_all(char ***t, char **line)
{
	int		i;
	char	**tab;

	tab = *t;
	i = 0;
	while (tab[i])
	{
		ft_strdel(&tab[i]);
		i++;
	}
	ft_strdel(line);
}

void		free_map(t_map m)
{
	int		i;

	i = 0;
	while (i < m.nb_line)
	{
		free(m.map[i]);
		i++;
	}
	free(m.map);
	mlx_destroy_window(m.mlx_ptr, m.win_ptr);
	exit(0);
}
