/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 01:32:24 by ommadhi           #+#    #+#             */
/*   Updated: 2019/11/22 23:13:07 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_cp_line(char **line, char **arr)
{
	int			len;
	char		*pfree;

	len = 0;
	pfree = *arr;
	if (!(ft_strchr(pfree, '\n')))
	{
		*line = ft_strdup(*arr);
		ft_strdel(arr);
		return (1);
	}
	while (pfree[len] && pfree[len] != '\n')
		len++;
	*line = ft_strsub(pfree, 0, len);
	*arr = ft_strdup(ft_strchr(pfree, '\n') + 1);
	free(pfree);
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char	*arr[4864];
	char		buff[BUFF_SIZE + 1];
	int			ret;
	char		*ptr;

	if (fd < 0 || read(fd, buff, 0) < 0 || BUFF_SIZE < 0 || fd > 4864 || !line)
		return (-1);
	if (arr[fd] == NULL)
		arr[fd] = ft_strnew(0);
	while (!(ft_strchr(arr[fd], '\n')) && (ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		ptr = arr[fd];
		arr[fd] = ft_strjoin(arr[fd], buff);
		free(ptr);
	}
	if (ret <= 0 && !*arr[fd])
	{
		ft_strdel(&arr[fd]);
		return (ret);
	}
	return (ft_cp_line(line, &arr[fd]));
}
