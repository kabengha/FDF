/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 15:03:34 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/17 21:24:30 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	i = 0;
	s11 = (unsigned char*)s1;
	s22 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s11[i] == s22[i] && i + 1 == n)
			return (s11[i] - s22[i]);
		if (s11[i] != s22[i])
			return (s11[i] - s22[i]);
		i++;
	}
	return (s11[i] - s22[i]);
}
