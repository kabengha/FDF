/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_ascii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:22:37 by ommadhi           #+#    #+#             */
/*   Updated: 2019/09/28 16:44:33 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_ascii(char **str)
{
	char	*can;
	int		i;

	i = 0;
	while (str[i] != NULL)
	{
		if (str[i + 1] != NULL)
			if (ft_strcmp(str[i], str[i + 1]) > 0)
			{
				can = str[i];
				str[i] = str[i + 1];
				str[i + 1] = can;
				i = 0;
			}
		i++;
	}
}
