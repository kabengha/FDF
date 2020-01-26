/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:56:11 by ommadhi           #+#    #+#             */
/*   Updated: 2019/11/26 00:55:23 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	char	*cast;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	j = 0;
	i = (size_t)start;
	cast = (char *)s;
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (tmp == NULL)
		return (NULL);
	while (cast[i] != '\0' && j < len)
	{
		tmp[j] = cast[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}
