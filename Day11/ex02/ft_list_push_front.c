/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 20:30:58 by jchan             #+#    #+#             */
/*   Updated: 2018/08/08 21:31:35 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	list = ft_create_elem(data);
	(*list).next = *begin_list;
	*begin_list = list;
}
