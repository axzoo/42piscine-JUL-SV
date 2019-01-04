/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 21:41:54 by jchan             #+#    #+#             */
/*   Updated: 2018/08/02 21:43:21 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_button(int i, int j, int k)
{
	if ((i <= j && i >= k) || (i >= j && i <= k))
	{
		return (i);
	}
	else if ((j <= i && j >= k) || (j >= i && j <= k))
	{
		return (j);
	}
	else if ((k <= j && k >= i) || (k >= j && k <= i))
	{
		return (k);
	}
}