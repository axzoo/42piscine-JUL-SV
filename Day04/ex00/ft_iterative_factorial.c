/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 08:53:49 by jchan             #+#    #+#             */
/*   Updated: 2018/07/31 20:49:54 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb) 
{
  int a = 1;
  int sum = 1;
  if(nb > 0)
  {
    while(a <= nb)
	{
      sum = sum * a; 
      a++;
    }
  }
	else
	{
    sum = 1;
	}
  
  printf("%d", sum);
  return sum;
}
