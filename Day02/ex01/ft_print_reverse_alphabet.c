/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 07:20:44 by jchan             #+#    #+#             */
/*   Updated: 2018/07/29 19:57:55 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print_reverse_alphabet(void);
int main () 
{
   ft_print_reverse_alphabet();   
   return(0);
}
void ft_print_reverse_alphabet () 
{
  char letter;
   for(letter = 'z' ; letter >= 'a' ; letter--) 
   {
      putchar(letter);
   }
}
