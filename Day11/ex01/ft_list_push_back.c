/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 20:55:42 by jchan             #+#    #+#             */
/*   Updated: 2018/08/08 21:31:50 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	if (!list)
	{
		list = ft_create_elem(data);
	}
	else
	{
		while ((*list).next)
		{
			list = (*list).next;
		}
		(*list).next = ft_create_elem(data);
	}
}
