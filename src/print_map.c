/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabengha <kabengha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:58:32 by kabengha          #+#    #+#             */
/*   Updated: 2020/01/25 20:41:32 by kabengha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static	void	iso(int *x, int *y, int z)
{
	int			previous_x;
	int			previous_y;

	previous_x = *x;
	previous_y = *y;
	*x = (previous_x - previous_y) * cos(0.523599);
	*y = -z + (previous_x + previous_y) * sin(0.523599);
}

static	void	print_horizontal(t_map m, t_point p, t_point incr)
{
	t_point		p1;

	if (incr.x + 1 < m.nb_column)
	{
		p1.y = m.zoom * incr.y;
		p1.x = m.zoom * (incr.x + 1);
		if (m.projection == 2)
			iso(&p1.x, &p1.y, m.map[incr.y][incr.x + 1] * m.z);
		if (m.map[incr.y][incr.x] || m.map[incr.y][incr.x + 1])
		{
			if (m.z > 0)
				m.current_color = (0x3cae38 * m.z);
			else
				m.current_color = (0x3cae38 * -(m.z));
			draw(m, p, p1);
		}
		else
		{
			m.current_color = 0xFFFFFF;
			draw(m, p, p1);
		}
	}
}

static	void	print_vertical(t_map m, t_point p, t_point incr)
{
	t_point		p1;

	if (incr.y + 1 < m.nb_line)
	{
		p1.y = m.zoom * (incr.y + 1);
		p1.x = m.zoom * incr.x;
		if (m.projection == 2)
			iso(&p1.x, &p1.y, m.map[incr.y + 1][incr.x] * m.z);
		if (m.map[incr.y][incr.x] || m.map[incr.y + 1][incr.x])
		{
			if (m.z > 0)
				m.current_color = (0x3cae38 * m.z);
			else
				m.current_color = (0x3cae38 * -(m.z));
			draw(m, p, p1);
		}
		else
		{
			m.current_color = 0xFFFFFF;
			draw(m, p, p1);
		}
	}
}

void			print_result(t_map m)
{
	t_point		p;
	t_point		incr;

	incr.y = -1;
	mlx_clear_window(m.mlx_ptr, m.win_ptr);
	menu(m);
	while (++incr.y < m.nb_line)
	{
		incr.x = -1;
		while (++incr.x < m.nb_column)
		{
			p.y = m.zoom * incr.y;
			p.x = m.zoom * incr.x;
			if (m.projection == 2)
				iso(&p.x, &p.y, m.map[incr.y][incr.x] * m.z);
			print_horizontal(m, p, incr);
			print_vertical(m, p, incr);
		}
	}
}
