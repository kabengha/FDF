/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 21:54:55 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/18 22:08:13 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	if (content == NULL)
	{
		(new->content_size = 0);
		(new->content = NULL);
		return (new);
	}
	new->content = malloc(content_size);
	new->content = ft_memcpy(new->content, content, content_size);
	new->content_size = content_size;
	return (new);
}
