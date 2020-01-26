/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 19:00:19 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/21 01:17:27 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*s1;

	i = 0;
	s1 = (char *)s;
	if (s != NULL)
	{
		if (!(str = ft_strnew(ft_strlen(s1))))
			return (NULL);
		while (s1[i])
		{
			str[i] = f(i, s1[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
