/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:31:55 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/20 02:46:24 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		l(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	int		j;
	char	*arr;
	char	*s1;
	char	*s2;

	i = -1;
	j = -1;
	if (str1 == NULL || str2 == NULL)
		return (NULL);
	s1 = (char *)str1;
	s2 = (char *)str2;
	if (!(arr = (char *)malloc(sizeof(char) * (l(s1) + l(s2) + 1))))
		return (NULL);
	while (s1[++i] != '\0')
		arr[i] = s1[i];
	while (s2[++j] != '\0')
	{
		arr[i] = s2[j];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
