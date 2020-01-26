/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 23:12:36 by ommadhi           #+#    #+#             */
/*   Updated: 2019/11/22 22:27:58 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len(int n)
{
	int		i;
	int		nb;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		i++;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int		lent;
	char	*s;
	int		i;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	lent = len(n);
	if (!(s = ft_strnew(lent)))
		return (NULL);
	if (n < 0)
	{
		n = -n;
		s[i] = '-';
		i++;
	}
	while (--lent >= i && n > 0)
	{
		s[lent] = (n % 10 + '0');
		n = n / 10;
	}
	return (s);
}
