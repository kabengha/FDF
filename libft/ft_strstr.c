/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 17:08:19 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/17 22:32:00 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s, const char *s2)
{
	char	*s1;
	int		i;
	int		j;
	int		index;

	s1 = (char *)s;
	i = 0;
	j = 0;
	index = 0;
	if (s2[i] == '\0')
		return (s1);
	while (s1[i] != '\0')
	{
		index = i;
		j = 0;
		while (s1[index] == s2[j] && s2[j] != '\0')
		{
			index++;
			j++;
		}
		if (s2[j] == '\0')
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
