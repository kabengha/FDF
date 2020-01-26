/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 22:07:24 by ommadhi           #+#    #+#             */
/*   Updated: 2019/10/19 15:38:23 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char*)s;
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] - c == 0)
			return (&str[i + 1]);
		i--;
	}
	return (NULL);
}
