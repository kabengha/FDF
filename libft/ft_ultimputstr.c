/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimputstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 13:03:51 by ommadhi           #+#    #+#             */
/*   Updated: 2019/11/24 13:04:31 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					ft_ultimputstr(void *add, size_t size)
{
	unsigned char		*str;
	size_t				i;

	i = 0;
	str = (unsigned char*)add;
	while (i < size)
	{
		if (str[i] <= 126 && str[i] >= 32)
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		i++;
	}
}
