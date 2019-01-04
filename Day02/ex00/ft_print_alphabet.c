/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 09:11:23 by jchan             #+#    #+#             */
/*   Updated: 2018/07/29 22:40:12 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print_alphabet(void);
int main () 
{
   ft_print_alphabet();   
   return(0);
}
void ft_print_alphabet () 
{
  char letter;
   for(letter = 'a' ; letter <= 'z' ; letter++) 
   {
      putchar(letter);
   }
}
