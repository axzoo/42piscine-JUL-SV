/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 20:55:54 by jchan             #+#    #+#             */
/*   Updated: 2018/08/08 21:30:45 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_list_h
#define ft_list_h

typedef struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;

t_list					*ft_create_elem(void *data);

#endif
