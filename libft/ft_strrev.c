/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 22:44:07 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/14 22:58:39 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t	i;
	size_t	j;
	char	can;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		can = str[i];
		str[i] = str[j];
		str[j] = can;
		i++;
		j--;
	}
	return (str);
}
