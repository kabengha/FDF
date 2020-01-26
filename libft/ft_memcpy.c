/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 17:58:00 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/21 02:06:52 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dest;

	dest = d;
	src = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return ((void*)dest);
}
