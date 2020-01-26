/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabengha <kabengha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 18:56:46 by kabengha          #+#    #+#             */
/*   Updated: 2020/01/26 00:13:27 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static	int		step_axis(int x)
{
	if (x > 0)
		return (1);
	else if (x < 0)
		return (-1);
	return (0);
}

static	void	part_one(t_map m, t_point d, t_point p, t_point step)
{
	t_point		px;
	int			acm;
	int			i;

	if (d.x > d.y)
	{
		acm = 0;
		i = -1;
		while (++i < d.x)
		{
			p.x += step.x;
			acm += d.y;
			if (acm > d.x)
			{
				acm -= d.x;
				p.y += step.y;
			}
			px.x = p.x + m.start_in.x;
			px.y = p.y + m.start_in.y;
			mlx_pixel_put(m.mlx_ptr, m.win_ptr, px.x, px.y, m.current_color);
		}
	}
}

static	void	part_two(t_map m, t_point d, t_point p, t_point step)
{
	t_point		px;
	int			acm;
	int			i;

	if (d.x <= d.y)
	{
		acm = 0;
		i = -1;
		while (++i < d.y)
		{
			p.y += step.y;
			acm += d.x;
			if (acm > d.y)
			{
				acm -= d.y;
				p.x += step.x;
			}
			px.x = p.x + m.start_in.x;
			px.y = p.y + m.start_in.y;
			mlx_pixel_put(m.mlx_ptr, m.win_ptr, px.x, px.y, m.current_color);
		}
	}
}

void			draw(t_map m, t_point p1, t_point p2)
{
	t_point		p;
	t_point		d;
	t_point		step;

	d.x = abs(p2.x - p1.x);
	d.y = abs(p2.y - p1.y);
	step.x = step_axis(p2.x - p1.x);
	step.y = step_axis(p2.y - p1.y);
	p.x = p1.x;
	p.y = p1.y;
	part_one(m, d, p, step);
	part_two(m, d, p, step);
}
