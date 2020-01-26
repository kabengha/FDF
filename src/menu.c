/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabengha <kabengha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 18:38:31 by kabengha          #+#    #+#             */
/*   Updated: 2020/01/19 17:19:05 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	print_menu(t_map m)
{
	int		y;
	void	*mlx;
	void	*win;
	int		color;

	mlx = m.mlx_ptr;
	win = m.win_ptr;
	color = 0xEAEAEA;
	y = 0;
	mlx_string_put(mlx, win, 20, 10, 0xFF0000, "------------MENU-----------");
	mlx_string_put(mlx, win, 40, y += 20, color, "How to Use");
	mlx_string_put(mlx, win, 65, y += 35, 0xFF0000, "Zoom:");
	mlx_string_put(mlx, win, 15, y += 35, color, "Scroll or [+] [-]");
	mlx_string_put(mlx, win, 65, y += 30, 0xFF0000, "Change Projection :");
	mlx_string_put(mlx, win, 15, y += 30, color, "Press [I] or [P] Key");
	mlx_string_put(mlx, win, 15, y += 30, color, "Left or Right Mouse Button");
	mlx_string_put(mlx, win, 65, y += 30, 0xFF0000, "Move: ");
	mlx_string_put(mlx, win, 15, y += 30, color, "Arrows or Mouse");
	mlx_string_put(mlx, win, 65, y += 30, 0xFF0000, "Flatten: ");
	mlx_string_put(mlx, win, 15, y += 30, color, "Scroll or [Z] or [X]");
	mlx_string_put(mlx, win, 65, y += 30, 0xFF0000, "Exit :");
	mlx_string_put(mlx, win, 15, y += 30, color, "Third button or [ESC]");
}

void	menu(t_map m)
{
	mlx_clear_window(m.mlx_ptr, m.win_ptr);
	print_menu(m);
}
