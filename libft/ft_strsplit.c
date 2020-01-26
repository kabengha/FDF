/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 08:03:43 by ommadhi           #+#    #+#             */
/*   Updated: 2019/11/29 00:21:11 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**bigarr;
	char	*str;

	if (!s)
		return (NULL);
	str = (char*)s;
	i = 0;
	bigarr = (char **)malloc(sizeof(char *) * (ft_countwords(str, c) + 1));
	if (bigarr == NULL)
		return (NULL);
	j = ft_countwords(str, c);
	while (j-- && *str)
	{
		while (*str && *str == c)
			str++;
		if (!(bigarr[i] = ft_strsub(str, 0, ft_len_words(str, c))))
			return (NULL);
		str = str + ft_len_words(str, c);
		i++;
	}
	bigarr[i] = 0;
	return (bigarr);
}
