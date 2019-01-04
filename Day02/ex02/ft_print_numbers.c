/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 11:33:12 by jchan             #+#    #+#             */
/*   Updated: 2018/07/29 20:10:19 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void  ft_print_numbers(void);
int main () 
{
    ft_print_numbers();   
   return(0);
}
void  ft_print_numbers () 
{
  char letter;
   for(letter = '0' ; letter <= '9' ; letter++) 
   {
      putchar(letter);
   }
}
