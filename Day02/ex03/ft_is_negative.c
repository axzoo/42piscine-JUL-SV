/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 11:44:01 by jchan             #+#    #+#             */
/*   Updated: 2018/07/29 22:06:39 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int n = 0;
void  ft_is_negative(int n);
int main () 
{
  printf("Enter a value : ");
  scanf( "%d" , &n);
  ft_is_negative(n);   
  return(0);
}

void  ft_is_negative (int n) 
{
  if(n >= 0) 
  {
    printf("P");
  }
  else
  {
    printf("N");
  }
}
