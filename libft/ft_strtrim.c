/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:01:06 by ommadhi           #+#    #+#             */
/*   Updated: 2019/10/17 16:32:15 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

static	int		space_plus(char *str)
{
	size_t	i;

	i = 0;
	if (ft_isspace(str[i]) == 1)
	{
		while (ft_isspace(str[i]) == 1)
		{
			i++;
			if (str[i + 1] == '\0')
				return (0);
		}
		return (i);
	}
	return (0);
}

static	int		space_min(char *str)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(str) - 1;
	while (ft_isspace(str[i]) == 1)
		i--;
	j = ft_strlen(str) - i - 1;
	return (j);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	char	*str;
	char	*arr;

	str = (char*)s;
	if (s != NULL)
	{
		i = (ft_strlen(str) - (space_plus(str) + space_min(str)));
		arr = ft_strsub(str, space_plus(str), i);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	return (NULL);
}
