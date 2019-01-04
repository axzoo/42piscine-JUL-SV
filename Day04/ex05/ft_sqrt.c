/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 11:19:01 by jchan             #+#    #+#             */
/*   Updated: 2018/07/31 19:32:19 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	int sq;

	i = 1;
	sq = 1;
	if(nb <= 0)
	{
		return 0;
	}
	while (i * i < nb)
	{
		i++;
	}
	if ((nb % i) == 0)
	{
		return i;
	}
	else
	{
		return 0;
	}
}
