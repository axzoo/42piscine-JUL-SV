/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:29:56 by jchan             #+#    #+#             */
/*   Updated: 2018/08/02 14:30:03 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int	*len;

	i = 0;
	len = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		len[i] = min;
		min++;
		i++;
	}
	*range = len;
	return (i);
}
