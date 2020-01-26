/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 20:23:14 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/17 22:08:39 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;
	char	*str;

	str = (char *)src;
	i = 0;
	j = 0;
	len_dest = ft_strlen(dst);
	while (dst[i])
		i++;
	if (size > ft_strlen(dst))
	{
		while (str[j] && i < size - 1)
		{
			dst[i] = str[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (len_dest + ft_strlen(str));
	}
	return (ft_strlen(str) + size);
}
