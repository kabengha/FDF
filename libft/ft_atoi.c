/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 17:05:14 by ommadhi           #+#    #+#             */
/*   Updated: 2019/12/03 03:07:19 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int	i;
	unsigned int	sing;
	unsigned int	res;

	i = 0;
	sing = 1;
	while (ft_space(str[i]) == 1)
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sing = sing * -1;
		i++;
	}
	res = 0;
	while (str[i] != '\0' && (str[i] <= '9' && str[i] >= '0'))
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sing);
}
