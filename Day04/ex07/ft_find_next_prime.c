/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:06:21 by jchan             #+#    #+#             */
/*   Updated: 2018/07/31 22:05:34 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	i = 1;
	if(nb <= 1)
	{
		return ft_is_prime(nb+1);
	}
	while (i < nb)
	{
    i++;
    if (i != nb && (nb % i) == 0)
	{
      return ft_is_prime(nb+1);
    }
  	}
  return nb;
}
