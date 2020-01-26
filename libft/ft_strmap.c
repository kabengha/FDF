/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:15:52 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/21 01:09:53 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;
	char	*s1;

	if (s == NULL)
		return (NULL);
	s1 = (char *)s;
	i = 0;
	if (!(str = ft_strnew(ft_strlen(s1))))
		return (NULL);
	while (s1[i])
	{
		str[i] = f(s1[i]);
		i++;
	}
	return (str);
}
