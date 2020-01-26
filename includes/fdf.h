/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabengha <kabengha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 18:57:12 by kabengha          #+#    #+#             */
/*   Updated: 2020/01/26 00:11:51 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define ABS(x) ((x < 0) ? -(x) : (x))

# include "mlx.h"
# include "../libft/libft.h"
# include <math.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef	struct	s_point
{
	int			x;
	int			y;
}				t_point;

typedef	struct	s_map
{
	int			**map;
	void		*mlx_ptr;
	void		*win_ptr;
	int			current_color;
	int			nb_line;
	int			nb_column;
	int			zoom;
	int			projection;
	t_point		start_in;
	int			z;
}				t_map;

void			ft_get_data(char *file, t_map *map);
void			draw(t_map m, t_point p1, t_point p2);
void			print_result(t_map m);
void			print_menu(t_map m);
void			menu(t_map m);
void			ft_free_all(char ***tab, char **line);
void			free_map(t_map m);

#endif
