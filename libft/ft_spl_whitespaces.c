/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:44:46 by ommadhi           #+#    #+#             */
/*   Updated: 2019/11/25 22:10:16 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

static int		ft_lent_words(char *str)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (space(str[i]) && str[i] != '\0')
	{
		while (space(str[i]) == 1)
			i++;
		if (str[i + 1] == '\0')
			return (0);
	}
	j = i + 1;
	while (str[j] && space(str[j]) == 0)
		j++;
	j = j - i;
	return (j);
}

static int		count(char *str)
{
	int			i;
	int			j;

	j = 0;
	i = 0;
	if (space(str[0]) == 0)
		j++;
	while (str[i])
	{
		if (space(str[i]) == 0 && space(str[i - 1]) == 1)
			j++;
		i++;
	}
	return (j);
}

char			**ft_spl_whitespaces(char *str)
{
	int			i;
	int			j;
	char		**tab;

	if (!str)
		return (NULL);
	i = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (count(str) + 1))))
		return (NULL);
	j = count(str);
	while (j-- && *str)
	{
		while (*str && space(*str))
			str++;
		if (!(tab[i] = ft_strsub(str, 0, ft_lent_words(str))))
			return (NULL);
		str = str + ft_lent_words(str);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
