/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabengha <kabengha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:59:03 by kabengha          #+#    #+#             */
/*   Updated: 2020/01/26 00:21:48 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static int		event(int key, t_map *m)
{
	(key == 53) ? free_map(*m) : 0;
	(key == 69) ? (*m).zoom += 1 : 0;
	if (key == 78 && (*m).zoom > 2)
		(*m).zoom -= 1;
	(key == 34) ? (*m).projection = 2 : 0;
	(key == 35) ? (*m).projection = 1 : 0;
	(key == 123) ? (*m).start_in.x -= 5 : 0;
	(key == 124) ? (*m).start_in.x += 5 : 0;
	(key == 125) ? (*m).start_in.y += 5 : 0;
	(key == 126) ? (*m).start_in.y -= 5 : 0;
	(key == 6) ? (*m).z += 2 : 0;
	(key == 7) ? (*m).z -= 2 : 0;
	(key == 46) ? menu(*m) : 0;
	print_result(*m);
	return (0);
}

static int		mouse_press(int key, int x, int y, t_map *m)
{
	(void)x;
	(void)y;
	if (key == 3)
		free_map(*m);
	else if (key == 4 && (*m).projection == 2)
		(*m).z += 2;
	else if (key == 5 && (*m).projection == 2)
		(*m).z -= 2;
	else if (key == 4)
		(*m).zoom += 2;
	else if (key == 5 && (*m).zoom >= 2)
		(*m).zoom -= 2;
	else if (key == 1)
		(*m).projection = 2;
	else if (key == 2)
		(*m).projection = 1;
	print_result(*m);
	return (0);
}

static int		mouse_move(int x, int y, t_map *m)
{
	(*m).start_in.x = x;
	(*m).start_in.y = y;
	print_result(*m);
	return (0);
}

static int		gestion_erreurs(int argc, char **argv)
{
	int			fd;
	char		buff[BUFF_SIZE + 1];

	if ((fd = open(argv[argc - 1], O_RDONLY)) < 0)
		return (1);
	if (read(fd, buff, BUFF_SIZE) == 0)
	{
		ft_putstr("fdf : Data Not Found !!");
		return (2);
	}
	if (argc != 2)
		return (1);
	return (0);
}

int				main(int argc, char **argv)
{
	int			err;
	t_map		m;

	if ((err = gestion_erreurs(argc, argv)) == 0)
	{
		ft_get_data(argv[1], &m);
		if ((m.nb_column == -1 || (m.nb_column == 0 && m.nb_line == 0))
		&& ft_putstr("Erreur\n"))
			return (1);
		(m.nb_line > 100) ? (m.zoom = 4) : 0;
		(m.nb_line > 300) ? (m.zoom = 1) : 0;
		m.projection = 1;
		m.z = 1;
		m.start_in.x = 920;
		m.start_in.y = 500;
		m.mlx_ptr = mlx_init();
		m.win_ptr = mlx_new_window(m.mlx_ptr, 2560, 1440, "FDF");
		mlx_hook(m.win_ptr, 2, 0, event, &m);
		mlx_hook(m.win_ptr, 4, 0, mouse_press, &m);
		mlx_hook(m.win_ptr, 6, 0, mouse_move, &m);
		print_result(m);
		mlx_loop(m.mlx_ptr);
	}
	(err == 1) ? ft_putstr("Erreur\n") : 0;
	return (0);
}
