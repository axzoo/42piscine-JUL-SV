/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 20:36:38 by jchan             #+#    #+#             */
/*   Updated: 2018/08/08 21:31:14 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i;
	t_list *list;

	list = *begin_list;
	i = 0
	if (!list)
	{
		while ((*list).next)
		{
			list = (*list).next;
			i++;
		}
		return i;
	}
}
