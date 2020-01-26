/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 21:14:35 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/21 02:05:55 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ds;
	char	*sr;
	int		len;

	len = (int)n - 1;
	ds = dest;
	sr = (char *)src;
	if (sr < ds)
	{
		while (len >= 0)
		{
			ds[len] = sr[len];
			len--;
		}
		return ((void*)ds);
	}
	else
		ft_memcpy(ds, sr, n);
	return ((void*)ds);
}
