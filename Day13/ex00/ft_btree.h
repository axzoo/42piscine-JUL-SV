/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:05:00 by jchan             #+#    #+#             */
/*   Updated: 2018/08/09 17:16:11 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct		s_btree
{
	struct s_btree	*parent;
	struct s_btree	*right;
	struct s_btree	*left;
	void			*item;
}					t_btree;
