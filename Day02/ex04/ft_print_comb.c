/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 13:01:01 by jchan             #+#    #+#             */
/*   Updated: 2018/07/29 17:22:03 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

void ft_print_comb(void);

int main(void) 
{ 
	ft_print_comb();
	return 0; 
}

void ft_print_comb() 
{
  for (int x = 0 ; x < 8 ; x++)
  { 
      for (int y = 1 ; y < 9 ; y++)
	  { 
        for (int z = 1 ; z < 10 ; z++)
		{ 
          if(x < y && y < z)
		  { 
            printf("%d%d%d, ", x, y, z); 
          } 
        } 
      } 
    } 
}
