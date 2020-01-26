/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:39:28 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/07 23:15:04 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int v;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		v = (n * -1);
	}
	else
	{
		v = n;
	}
	if (v > 9)
		ft_putnbr_fd(v / 10, fd);
	ft_putchar_fd(v % 10 + '0', fd);
}
