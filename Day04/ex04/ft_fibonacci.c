/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibbonacci.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:39:01 by jchan             #+#    #+#             */
/*   Updated: 2018/07/31 20:52:49 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int nb)
{
	if(nb < 0)
	{
		return(-1);
	}
	if(nb <=2)
	{
		return(nb);
	}
	return ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2);
}
