/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:09:54 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/17 22:10:13 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char*)s;
	i = 0;
	if (c == '\0')
	{
		while (str[i])
			i++;
		return (&str[i]);
	}
	while (str[i] != '\0')
	{
		if (c - str[i] == 0)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
