/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 18:58:05 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/17 22:34:02 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t n)
{
	size_t	i;
	int		j;
	size_t	in;
	char	*str;

	str = (char*)src;
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (i < n && str[i] != '\0')
	{
		in = i;
		j = 0;
		while (in < n && to_find[j] == str[in] && to_find[j] && str[in])
		{
			j++;
			in++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
