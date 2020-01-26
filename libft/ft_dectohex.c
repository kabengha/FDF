/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 22:44:57 by ommadhi           #+#    #+#             */
/*   Updated: 2019/11/22 22:55:06 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len(int n)
{
	int			i;
	int			nb;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		i++;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

char			*ft_dectohex(unsigned int n)
{
	int			lent;
	char		*tab;
	char		*s;

	tab = "0123456789abcdef";
	if (n == 0)
		return (ft_strdup("0"));
	lent = len(n);
	if (!(s = ft_strnew(lent)))
		return (NULL);
	while (lent-- >= 0 && n > 0)
	{
		s[lent] = (tab[n % 16]);
		n = n / 16;
	}
	return (s);
}
