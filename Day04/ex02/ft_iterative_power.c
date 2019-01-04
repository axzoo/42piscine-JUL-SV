/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 10:21:03 by jchan             #+#    #+#             */
/*   Updated: 2018/07/31 18:51:29 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
  int result = 1;
    if ((nb == 0 && power !=0) || power < 0)
	{
      return 0;
    }
    if (power == 0 || ( nb < 0 && power == 0))
	{
      return 1;
    }
	else
	{
      while (power > 0)
	  {
        result =  nb * result;
        power--;
      }
      return result;
    }
}
