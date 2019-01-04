/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:39:01 by jchan             #+#    #+#             */
/*   Updated: 2018/07/31 19:52:49 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int sum = 1;
int ft_recursive_factorial(int nb) 
{  
  if(nb > 0)
  {
    ft_recursive_factorial(nb-1);
    sum = sum * nb;
  }
  else
  {
    return 1;
  }

  return sum;
}
