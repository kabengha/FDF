/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 16:34:35 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/17 21:46:18 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *s, size_t n)
{
	size_t	i;
	size_t	o;
	char	*src;

	src = (char*)s;
	o = 0;
	i = 0;
	while (dest[o] != '\0')
		o++;
	while (i < n && src[i])
	{
		dest[o] = src[i];
		i++;
		o++;
	}
	dest[o] = '\0';
	return (dest);
}
