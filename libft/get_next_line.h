/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 01:27:02 by ommadhi           #+#    #+#             */
/*   Updated: 2019/11/22 23:04:33 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "../libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# define BUFF_SIZE 16
# include <fcntl.h>

int				get_next_line(const int fd, char **line);

#endif
